    #include<iostream.h>

     main  ()
     {
     int n,m;
     float l;
     cout<<"masukkan tanggal kelahiran anda (n) : "; cin>>n;
     cout<<"masukkan bulan kelahiran anda (m) : "; cin>>m;
     cout<<"masukkan tahun kelahiran anda (l), isi 2 digit terakhir : "; cin>>l;
     n += m;
     cout <<"nilai n += m "<<n<<endl;
      n -= m;
     cout <<"nilai n -= m "<<n<<endl;
      n %= m;
     cout <<"nilai n %= m "<<n<<endl;
      n *= m;
     cout <<"nilai n *= m "<<n<<endl;
      n /= m;
     cout <<"nilai n /= m "<<n<<endl;
     return(0);
     }

