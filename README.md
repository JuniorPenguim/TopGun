# Jogo TopGun - Computação I (2020-1) - PE / UFRRJ Nova Iguaçu
#### Criado por: Beatriz Cardoso, Dirceu Neto e Jeferson Melo.


Entre numa aventura de aviação encarnando Maverick do clássico filme "TOPGUN"! 

Você deve se desviar de naves e bombas inimigas para não ser destruído e atirar nelas para ganhar pontos. Colete galões de gasolina para encher o tanque e estrelas para aumentar a letalidade do seus tiros! Ao fim, encare e destrua a Nave Chefe para vencer o jogo!

![Screenshot from 2021-05-20 12-52-04](https://user-images.githubusercontent.com/72050839/119735647-07f51f80-be53-11eb-9903-e4fcdcc10545.png)

![Screenshot from 2021-05-26 18-44-43](https://user-images.githubusercontent.com/72050839/119735543-df6d2580-be52-11eb-9891-faadbb42eea5.png)

![Screenshot from 2021-05-20 12-53-01](https://user-images.githubusercontent.com/72050839/119735559-e5fb9d00-be52-11eb-801a-05afb1df388d.png)

## Instalação

Para jogar, baixe os arquivos deste repositório e abra o terminal Linux na pasta onde os arquivos se encontram.

Faça a instalação do gcc:
```bash
sudo apt install gcc
```

Faça a intalação do SDL:
```bash
sudo apt-get install libsdl2-dev
sudo apt install libjpeg-dev libwebp-dev libtiff5-dev libsdl2-image-dev libsdl2-image-2.0-0 -y
sudo apt install libmikmod-dev libfishsound1-dev libsmpeg-dev liboggz2-dev libflac-dev libfluidsynth-dev libsdl2-mixer-dev libsdl2-mixer-2.0-0 -y
sudo apt install libfreetype6-dev libsdl2-ttf-dev libsdl2-ttf-2.0-0 -y
```

Crie um arquivo executável para o programa:
```bash
gcc screen.c -o execTopgun2 -lSDL2 -lSDL2_image -lSDL2_mixer -lSDL2_ttf -lm 
```

Sempre que for executar o programa, digite no terminal onde os arquivos se encontram o seguinte comando:
```bash
./execTopgun2
```
