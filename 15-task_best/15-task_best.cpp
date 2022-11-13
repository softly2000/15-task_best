Sulaimanov Iligiz.
IT-1-22;
/**********************--С Масс--*********************/

// Var 0 //

int symptom(string data[])
{
    string yes = "Да";
    if(data[0] == yes && data[1] == yes && data[2] == yes)
       return 1;
    else 
    {
       cout << "\n\nДиагноз не поставлен!\n" << "----------------------";
       return 0;
    }   
}
int main()
{
    for(int i=1; i<5; i++)
    {
      cout << "\n\nСценарий " << i;      
      cout << "\n";
      string data[3];
      cout << "\nСимптомы !\n";
      cout << "1)Kашель - ";cin >> data[0];
      cout << "2)Хрипы - ";cin >> data[1];
      cout << "3)Затрудненное дыхание - ";cin >> data[2];
      int get;
      get = symptom(data);
      if(get)cout << "\nБронхит!\n" << "----------";
    }  
}



// Var 1 //

bool symptom(string data[])
{
    string yes = "Да";
    if(data[0] == yes && data[1] == yes && data[2] == yes)
       return true;
    else 
    {
       cout << "\n\nДиагноз не поставлен!\n" << "----------------------";
       return false;
    }   
}
int main()
{
    for(int i=1; i<5; i++)
    {
      cout << "\n\nСценарий " << i;      
      cout << "\n";
      string data[3];
      cout << "\nСимптомы !\n";
      cout << "1)Kашель - ";cin >> data[0];
      cout << "2)Хрипы - ";cin >> data[1];
      cout << "3)Затрудненное дыхание - ";cin >> data[2];
      int get;
      get = symptom(data);
      if(get)cout << "\nБронхит!\n" << "----------";
    }  
}


/*************************--Без Масс--*****************************/

// Var 2 //
int symptom(string symOn, string symTw, string symTr)
{
    string yes = "Да";
    if(symOn == yes && symTw == yes && symTr == yes)
       return 1;
    else 
    {
       cout << "\n\nДиагноз не поставлен!\n" << "----------------------";
       return 0;
    }

}

int main()
{
    for(int i=1; i<5; i++)
    {
      cout << "\n\nСценарий " << i << "\n";
      int get;
      string symOn;
      string symTw;
      string symTr;
      cout << "\nСимптомы !\n";
      cout << endl;
      cout << "1)Kашель - ";cin >> symOn;
      cout << "2)Хрипы - ";cin >> symTw;
      cout << "3)Затрудненное дыхание - ";cin >> symTr;
      get = symptom(symOn,symTw,symTr);
      if(get)cout << "\nБронхит!\n" << "----------";
    }    
}

// Var 3 //
 
bool symptom(string symOn, string symTw, string symTr)
{
    string yes = "Да";
    if(symOn == yes && symTw == yes && symTr == yes)
       return true;
    else 
    {
       cout << "\n\nДиагноз не поставлен!\n" << "----------------------";
       return false;
    }

}

int main()
{
    for(int i=1; i<5; i++)
    {
      cout << "\n\nСценарий " << i << "\n";
      int get;
      string symOn;
      string symTw;
      string symTr;
      cout << "\nСимптомы !\n";
      cout << endl;
      cout << "1)Kашель - ";cin >> symOn;
      cout << "2)Хрипы - ";cin >> symTw;
      cout << "3)Затрудненное дыхание - ";cin >> symTr;
      get = symptom(symOn,symTw,symTr);
      if(get)cout << "\nБронхит!\n" << "----------";
    }    
}
