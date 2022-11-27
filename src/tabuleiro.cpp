Tabuleiro(){
  
  string tab[8][8]; //Formação do tabuleiro
  
}

iniciarTabuleiro(){
  
  for(int i=1;i<=8;i++){
    for(int j=1;j<=8;j++){
      tab[i][j]=' '; //Esvaziar o tabuleiro, deixando tudo com espaço para tirar valores lixos
    }
  }
  
  tab[1][1]=;tab[1][8]=; //Aqui vai os objetos torre da cor branca
  tab[1][2]=;tab[1][7]; //Aqui vai os objetos cavalo da cor branca
  tab[1][3]=;tab[1][6]; //Aqui vai os objetos bispo da cor branca
  tab[1][4]=; //Aqui vai o objeto rainha da cor branca
  tab[1][5]=; //Aqui vai o objeto rei da cor branca
  tab[2][1]=;tab[2][2];tab[2][3]=;tab[2][4];tab[2][5]=;tab[2][6];tab[2][7]=;tab[2][8]; //Aqui vai os objetos peões da cor branca
  
  tab[8][1]=;tab[8][8]=; //Aqui vai os objetos torre da cor preta
  tab[8][2]=;tab[8][7]; //Aqui vai os objetos cavalo da cor preta
  tab[8][3]=;tab[8][6]; //Aqui vai os objetos bispo da cor preta
  tab[8][4]=; //Aqui vai o objeto rainha da cor preta
  tab[8][5]=; //Aqui vai o objeto rei da cor preta
  tab[7][1]=;tab[7][2];tab[7][3]=;tab[7][4];tab[7][5]=;tab[7][6];tab[7][7]=;tab[7][8]; //Aqui vai os objetos peões da cor preta
  
}

Teste(){
  
  for(int i=1;i<=8;i++){
    for(int j=1;j<=8;j++){
      std::cout<<" "tab[i][j];
    }
    std::cout<<"\n";
  }

}
