
#include<stdio.h>
#include <math.h>//floor

struct Pixel
{
  unsigned char B;
  unsigned char G;
  unsigned char R;
};

int main()
{
    struct Pixel pixel, pixel2;
    int WPX, HPX, BPP, PAL, i, j, AUX, NCP, NIC, offset;
    FILE * imagem, * imagem2;
    unsigned char byte;
    unsigned short word;
    unsigned int dword;
    imagem = fopen("pikachu.bmp", "rb");

    if(imagem == NULL)
    {
        fprintf(stderr,"Arquivo nao encontrado!\n");
        return 1;
    }

//  2 bytes	0-1	Se for Windows, 'B' e 'M'
    fread(&byte, sizeof(byte), 1, imagem);
    printf("%c", byte);
    fread(&byte, sizeof(byte), 1, imagem);
    printf("%c\n", byte);

//  dword	2-5	Tamanho do arquivo (bytes)
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Tamanho do arquivo(bytes): %u\n", dword);

//  word	6-7	Informa��o reservada (n�o vai ter nada)
//  word	8-9	Informa��o reservada (n�o vai ter nada)
    fseek(imagem, 2*sizeof(word), SEEK_CUR); //PULANDO 4 BYTES

//  dword	10-13	Offset, onde dados da imagem come�am
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Offset(bytes): %u\n", dword);
    offset = dword;
//  dword	14-17	Tamanho do cabe�alho, a partir daqui
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Tamanho do cabe�alho(bytes): %u\n", dword);

//  dword	18-21	Largura da imagem (pixels), WPX
    fread(&dword, sizeof(dword), 1, imagem);
    WPX = dword;
    printf("Largura da imagem(pixels): %u\n", WPX);

//  dword	22-25	Altura da imagem (pixels), HPX
    fread(&dword, sizeof(dword), 1, imagem);
    HPX = dword;
    printf("Altura da imagem(pixels): %u\n", HPX);

//  word	26-27	Qtde de planos de cores
    fread(&word, sizeof(word), 1, imagem);
    printf("Qtde de planos de cores: %u\n", word);

//  word	28-29	Bits por pixel, BPP
    fread(&word, sizeof(word), 1, imagem);
    BPP = word;
    printf("Bits por pixel: %u\n", BPP);

//  dword	30-33	M�todo de compress�o
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Metodo de compressao: %u\n", dword);

//  dword	34-37	Tamanho da imagem
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Tamanho da imagem: %u\n", dword);

//  dword	38-41	Resolu��o horizontal
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Resolucao horizontal: %u\n", dword);

//  dword	42-45	Resolu��o vertical
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Resolucao vertical: %u\n", dword);

//  dword	46-49	N�mero de cores na paleta, NCP
    fread(&dword, sizeof(dword), 1, imagem);
    NCP = (dword == 0) ? 1<< BPP : dword;
    printf("Numero de cores na paleta, NCP: %u\n", NCP);

//  dword	50-53	N�mero de cores importantes, NIC
    fread(&dword, sizeof(dword), 1, imagem);
    NIC = (dword == 0) ? 1<< BPP : dword;
    printf("Numero de cores importantes, NIC: %u\n", (dword == 0) ? NCP : dword);

    PAL = floor((BPP*WPX + 31.)/32.)*4;
    printf("Tamanho da linha da array de pixels(bytes): %u\n", PAL);

    //copia o cabe�alho
    imagem2 = fopen("pikachu3.bmp", "wb");
    rewind(imagem);
    for(i=0; i<offset; i++)
    {
        fread(&byte, sizeof(byte), 1, imagem);
        fwrite(&byte, sizeof(byte), 1, imagem2);
    }
    //Leitura pixel a pixel
    AUX = PAL - WPX*3; //(diferen�a em bytes entre a largura e a linha da array)
    for(j=0; j<HPX; j++) //(a cada linha da imagem)
    {
        for(i=0; i<WPX; i++) //(a cada coluna da mesma linha)
        {
            fread(&pixel, sizeof(pixel), 1, imagem);//(canais B, G e R, nesta ordem)
            if(pixel.B == 0)
            {
                pixel.B = 204;
            }

            if(pixel.G == 242)
            {
                pixel.G = 72;
            }

            if(pixel.R == 254)
            {
                pixel.R = 63;
            }
            pixel2.B = pixel.B;
            pixel2.G = pixel.G;
            pixel2.R = pixel.R;
            fwrite(&pixel2, sizeof(pixel), 1, imagem2);
        }
        if (AUX > 0)
        {
            fseek(imagem, AUX, SEEK_CUR);
            for(i=0; i< AUX; i++)
            {
                fwrite(&byte, sizeof(byte), 1, imagem2);
            }
        }
    }
    fclose(imagem2);
    fclose(imagem);
    return 0;
}
