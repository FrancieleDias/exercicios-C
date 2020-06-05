# exercicios-C-softblue

Utilizando Visual Studio Code.

Configuracao basica VS ubuntu:

Instalar Visual Studio Code.

Instalar as extencoes de c++ digitando "c++" na opcao "extensions", icone de blocos do lado esquerdo(Ctrl+Shift+X).
assegure-se de que o GCC esteja instalado digitando o seguinte codigo no terminal:

gcc -v

 

Se nao estiver instalado, atualize o ubuntu com o seguinte codigo:

sudo apt-get update

Depois, instale o GNU compiler tools e o GDB debugger com este comando:

sudo apt-get install build-essential gdb

Para executar o VS, abra o terminal dentro da pasta que sera a pasta do seu projeto e execute: (code espaco ponto)
code . 

Esta pasta sera seu "workspace", o workspace defindo e necessario para que a compilacao ocorra sem erros.
Dentro do VS, clique no nome da pasta do projeto do lado esquerdo>new file e digite o codigo
Para compilar, va na opcao Terminal > Configure Default Build Task>C/C++: g++ build active file

Isto criara um arquivo "tasks.json"

Volte para seu codigo e clique na opcao Terminal novamente. Terminal>Run Build Task.

O terminal integrado do VS aparecera na parte de baixo e avisara que a tarefa foi executada, ao apertar qualquer tecla,
este terminal fechara.
Clique novamente na opcao Terminal, um novo terminal abrira.
Digite ls e voce vera que o executavel do seu codigo foi criado.
Voce podera executar seu codigo utilizando o comando:

./nomedoseucodigo




