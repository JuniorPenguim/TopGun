#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

#define BUFFER_SIZE 512

//cria a janela
SDL_Window *janela;

//cria a maquina que cola os adesivos na tela
SDL_Renderer *renderer;

SDL_Surface *text_surface;
SDL_Surface *tela;

SDL_Texture *texture_palavra;

TTF_Font *fonte;
TTF_Font *fonte1;

SDL_Color color={255,255,255};

SDL_Rect corte_img_simulador;
SDL_Rect tamanho_img_simulador;

int main(void)
{
    SDL_Init(SDL_INIT_EVERYTHING);
    janela = SDL_CreateWindow("Diverbras", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, 0);
    renderer = SDL_CreateRenderer(janela, -1, 0);
    TTF_Init();
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);

    char vetor[9] = {'D','i','r','c','e','u'};
    int numeros[5] = {666};
    int i = 0;

    fonte = TTF_OpenFont("TOP-GUN.ttf", 32);
    fonte1 = TTF_OpenFont("/usr/share/fonts/truetype/dejavu/DejaVuSerif-Bold.ttf", 32);

    corte_img_simulador.x = 0;
    corte_img_simulador.y = 0;
    corte_img_simulador.w = 500;
    corte_img_simulador.h = 100;

    tamanho_img_simulador.x = 0;
    tamanho_img_simulador.y = 0;
    tamanho_img_simulador.w = 360;
    tamanho_img_simulador.h = 70;

    //text_surface=TTF_RenderText_Solid(fonte,"Hello World!",color);

    while( 1 )
    {
        
        SDL_Event event;
        while(SDL_PollEvent(&event))
        {
            switch (event.type)
            {
                case SDL_QUIT:
                    SDL_DestroyRenderer(renderer);
                    SDL_DestroyWindow(janela);
                    TTF_Quit();
                    SDL_Quit();
                    return 0;
                    break;
                case SDL_KEYDOWN:
                    switch(event.key.keysym.scancode)
                    {
                        case SDL_SCANCODE_RETURN:
                            vetor[8] = '\0';
                            break;

                        case SDL_SCANCODE_BACKSPACE:
                            i--;
                            vetor[i] = '-';
                            break;

                        case SDL_SCANCODE_A:
                            vetor[i] = 'A';
                            i++;
                            break;

                        case SDL_SCANCODE_B:
                            vetor[i] = 'B';
                            i++;
                            break;

                        case SDL_SCANCODE_C:
                            vetor[i] = 'C';
                            i++;
                            break;

                        case SDL_SCANCODE_D:
                            vetor[i] = 'D';
                            i++;
                            break;

                        case SDL_SCANCODE_E:
                            vetor[i] = 'E';
                            i++;
                            break;

                        case SDL_SCANCODE_F:
                            vetor[i] = 'F';
                            i++;
                            break;

                        case SDL_SCANCODE_G:
                            vetor[i] = 'G';
                            i++;
                            break;

                        case SDL_SCANCODE_H:
                            vetor[i] = 'H';
                            i++;
                            break;

                        case SDL_SCANCODE_I:
                            vetor[i] = 'I';
                            i++;
                            break;

                        case SDL_SCANCODE_J:
                            vetor[i] = 'J';
                            i++;
                            break;

                        case SDL_SCANCODE_K:
                            vetor[i] = 'K';
                            i++;
                            break;

                        case SDL_SCANCODE_L:
                            vetor[i] = 'L';
                            i++;
                            break;

                        case SDL_SCANCODE_M:
                            vetor[i] = 'M';
                            i++;
                            break;

                        case SDL_SCANCODE_N:
                            vetor[i] = 'N';
                            i++;
                            break;

                        case SDL_SCANCODE_O:
                            vetor[i] = 'O';
                            i++;
                            break;

                        case SDL_SCANCODE_P:
                            vetor[i] = 'P';
                            i++;
                            break;

                        case SDL_SCANCODE_Q:
                            vetor[i] = 'Q';
                            i++;
                            break;

                        case SDL_SCANCODE_R:
                            vetor[i] = 'R';
                            i++;
                            break;

                        case SDL_SCANCODE_S:
                            vetor[i] = 'S';
                            i++;
                            break;

                        case SDL_SCANCODE_T:
                            vetor[i] = 'T';
                            i++;
                            break;

                        case SDL_SCANCODE_U:
                            vetor[i] = 'U';
                            i++;
                            break;

                        case SDL_SCANCODE_V:
                            vetor[i] = 'V';
                            i++;
                            break;

                        case SDL_SCANCODE_W:
                            vetor[i] = 'W';
                            i++;
                            break;

                        case SDL_SCANCODE_X:
                            vetor[i] = 'X';
                            i++;
                            break;

                        case SDL_SCANCODE_Y:
                            vetor[i] = 'Y';
                            i++;
                            break;

                        case SDL_SCANCODE_Z:
                            vetor[i] = 'Z';
                            i++;
                            break;

                    }
                    break;      
            }
            
        if(i > 8)
        {
            vetor[8] = '\0';
            i = 0;
        }
        else if(i < 0)
        {
            i = 8;
        }
            
        text_surface = TTF_RenderText_Solid(fonte, vetor, color);
        texture_palavra = SDL_CreateTextureFromSurface(renderer, text_surface);
               
        }
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, texture_palavra, &corte_img_simulador, &tamanho_img_simulador);
        SDL_RenderPresent(renderer);
        SDL_Delay(100);
    }

    return 0;
}















/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>

SDL_Window *janela;

SDL_Renderer *renderer;

TTF_Font *texto;

SDL_Color cor = {255, 255, 255, 0}; 

SDL_Surface *texto_surface;

SDL_Texture *texto_texture;

SDL_Rect tamanho_texto;

//Mix_Music *musica;

int main()
{
    SDL_Init(SDL_INIT_EVERYTHING);
    TTF_Init( );
    janela = SDL_CreateWindow("Diverbras", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, 0);
    renderer = SDL_CreateRenderer(janela, -1, 0); 

    //Mix_Init(MIX_INIT_MP3);

    texto = TTF_OpenFont("/usr/share/fonts/truetype/dejavu/DejaVuSerif-Bold.ttf", 24);

    texto_surface = TTF_RenderText_Solid(texto, "Pontuacao:", cor);
    texto_texture = SDL_CreateTextureFromSurface(renderer, texto_surface);

    /*musica = Mix_LoadMUS("abetura.mp3");
    if (musica == NULL)
    {
        printf("Deu erro no carregamento %s\n", Mix_GetError());
    }*/

    //Mix_PlayMusic(musica, -1);
    /*
    tamanho_texto.x = 540;
    tamanho_texto.y = 0;
    tamanho_texto.w = 100;
    tamanho_texto.h = 40; 
    
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);

    while( 1 )
    {
        SDL_Event event;
        while(SDL_PollEvent(&event))
        {
            switch(event.type)
            {
                case SDL_QUIT:
                    SDL_DestroyRenderer(renderer);
                    SDL_DestroyWindow(janela);
                    SDL_Quit();
                    return 0;
                    break;
            }
        }
        

        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, texto_texture, NULL, &tamanho_texto);
        SDL_RenderPresent(renderer);
        SDL_Delay(1000/10);    
    }
    return 0;
}



/*
texto = TTF_OpenFont("Verdana.ttf", 24);

texto = TTF_OpenFont("FreeSans.ttf", 24);
    
texto_surface = TTF_RenderText_Solid(texto, "Pontuação:", cor);
texto_texture = SDL_CreateTextureFromSurface(renderer, texto_surface);

TTF_Font *texto;

SDL_Color cor = {255, 255, 255, 0}; 

SDL_Surface *texto_surface;

SDL_Texture *texto_texture;

SDL_Rect tamanho_texto;


int main(int argc, char const *argv[])
{
    int q, m, *count;
    m = 100;
    *count = m;
    printf("%d\n", *count); //funciona mas da erro, porque?
    return 0;
}

/*
int main()
{
    int vetor[3];
    for (int i = 0; i < 3; ++i)
    {
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < 3; ++i)
    {
        printf("%d\n", vetor[i]);
    }
    int matriz[3][3];
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("-%d", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// register

/* pwr(register int m, register int e)
{
    register int temp;

    temp = 1;

    for (; e; e--)
    {
        temp = temp * m;
    }
    return temp;
}

 main(int argc, char const *argv[])
{
    int a, b, resultado;
    scanf("%d %d", &a, &b);
    resultado = pwr(a,b);
    printf("%d\n", resultado);
    return 0;
}*/

// static

/* aula()
{
    static int teste;
    teste = teste + 5;
    return (teste);
}
 main()
{
    int resultado;
    resultado = aula();
    printf("%d\n", resultado);
    return 0;
}*/

