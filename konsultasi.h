void Apotek::konsultasi(){
  int pilihsp;
  int j;
  for (int k = 0; k < 1; k++){
  cout<<"================================================="<<endl;
  cout<<"|                KONSULTASI DOKTER              |"<<endl;
  cout<<"================================================="<<endl;
  cout<<endl;
  cout<<"Hai "<<usr<<"Kamu konsultasi untuk siapa"<<endl;
  cout<<"================================================="<<endl;
  cout<<"|              DAFTAR KONSULTASI                |"<<endl;
  cout<<"================================================="<<endl;
  cout<<" Masukkan Nama Anda : ";
  cin.ignore();
  getline(cin, pasien[k].nama);
  cout<<" Masukkan Umur  Anda : ";
  cin >> pasien[k].umur;
  cout<<" Masukkan No Handphone : ";
  cin >> pasien[k].no_telepon;
  cout<<" Masukkan Jenis kelamin Anda : ";
  cin.ignore();
  getline(cin, pasien[k].jk);
  cout<<endl;
  cout<<"============== Cari dokter Umum atau Spesialis ============"<<endl;
  cout<<"-----------------------------------------------------------"<<endl;
  cout<<endl;
  cout<<" 1. Kulit  "<<endl;
  cout<<" 2. Psikolog  "<<endl;
  cout<<" 3. Jiwa  "<<endl;
  cout<<" 4. Kandungan  "<<endl;
  cout<<" 5. Anak  "<<endl;
  cout<<" 6. Penyakit Dalam  "<<endl;
  cout<<" 7. Gigi  "<<endl;
  cout<<" 8. Umum "<<endl;
  cout<<" 9. THT  "<<endl;
  cout<<" 10. Paru  "<<endl;
  cout<<endl;
  cout<<"Masukan Pilihan anda "<<endl;
  cin>>pilihsp;

  if(pilihsp == 1){
		cout<<endl<<"===================== Dokter Spesialis Kulit ================="<<endl;
    cout<<endl;
		cout<<" 1.) dr.Mira Ikawati Sp.KK,FINSDV            Rp 150.000"<<endl;
    cout<<" 2.) dr.Ni Wayan sulianti siskadewi Sp.KK    Rp 25.000"<<endl;
    cout<<" 3.) dr.Monalisa Manik, M.Ked, Sp.DV         Rp 25.000"<<endl;
    cout<<" 4.) dr.Sitti Musafirah Sp.KK                Rp 250.000"<<endl;
    cout<<" 5.) dr.Dian Takarina Sp.KK                  Rp 150.000"<<endl;
    cout<<" 6.) dr.Teti Loho Sp.KK                      Rp 310.000"<<endl;
    cout<<" 7.) dr.Adelia Wulandari Sp.KK               Rp 150.000"<<endl;
    cout<<" 8.) dr.Agni anatasia Sp.KK                  Rp 150.000"<<endl;
    cout<<" 9.) dr.Febriana Sp.KK                       Rp 150.000"<<endl;
    cout<<" 10.) dr.Keni Istasaputri Sp.KK              Rp 150.000"<<endl;
		cout<<"======================================================================="<< endl;
		cout<<"Masukkan pilihan jam dan dokter (1-10) : ";
		cin>>pilihdokter;
		switch (pilihdokter){
			case 1 :
        hargadokter = 150000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr.Mira Ikawati Sp.KK,FINSDV "<<endl;
        cout<<"|  Profil | "<< " Dokter kulit "<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.006721"<<endl;
        cout<<" Alumni   : Universitas Indonesia "<<endl;
        cout<<" Praktiik : Klinik Utama M3 Bogor"<<endl;
        hargadokter = 150000;
        temp_jeniskonsul = jenis_konsultasi[0];
        temp_NoChat = nomor[0];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[0]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 2 :
        hargadokter = 25000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr.Ni Wayan sulianti siskadewi Sp.KK "<<endl;
        cout<<"|  Profil | "<< " Dokter kulit "<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 51.2.1.602.4.18.887690"<<endl;
        cout<<" Alumni   : Universitas Udayana "<<endl;
        cout<<" Praktiik : Klinik Pelita Kurma"<<endl;
        hargadokter = 25000;
        temp_jeniskonsul = jenis_konsultasi[0];
        temp_NoChat = nomor[0];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[0]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 3 :
        hargadokter = 25000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr.Monalisa Manik, M.Ked, Sp.DV "<<endl;
        cout<<"|  Profil | "<< " Dokter kulit "<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 41.2.1.602.5.16.88750986"<<endl;
        cout<<" Alumni   : Universitas Indonesia "<<endl;
        cout<<" Praktik  : Klinik Budidaya sinar"<<endl;
        hargadokter = 25000;
        temp_jeniskonsul = jenis_konsultasi[0];
        temp_NoChat = nomor[0];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[0]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 4 :
        hargadokter = 250000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr.Sitti Musafirah Sp.KK     "<<endl;
        cout<<"|  Profil | "<< " Dokter kulit "<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 91.8.1.602.2.18.0076745"<<endl;
        cout<<" Alumni   : Universitas Ahmad Dahlan "<<endl;
        cout<<" Praktik  : Klinik Rahma Bandung"<<endl;
        hargadokter = 250000;
        temp_jeniskonsul = jenis_konsultasi[0];
        temp_NoChat = nomor[0];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[0]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          

        case 5 :
        hargadokter = 150000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr.Dian Takarina Sp.KK  "<<endl;
        cout<<"|  Profil | "<< " Dokter kulit "<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.19.776590"<<endl;
        cout<<" Alumni   : Universitas Gadjah Mada "<<endl;
        cout<<" Praktiik : Klinink Utama Bandung"<<endl;
        hargadokter = 150000;
        temp_jeniskonsul = jenis_konsultasi[0];
        temp_NoChat = nomor[0];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[0]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 6 :
        hargadokter = 310000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr.Teti Loho Sp.KK              "<<endl;
        cout<<"|  Profil | "<< " Dokter kulit "<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.2.1.602.3.14.7659086"<<endl;
        cout<<" Alumni   : Universitas Atma jaya "<<endl;
        cout<<" Praktiik : Klinink Utama Jogja"<<endl;
        hargadokter = 150000;
        temp_jeniskonsul = jenis_konsultasi[0];
        temp_NoChat = nomor[0];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[0]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 7 :
        hargadokter = 150000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr.Adelia Wulandari Sp.KK    "<<endl;
        cout<<"|  Profil | "<< " Dokter kulit "<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.0006789"<<endl;
        cout<<" Alumni   : Universitas Brawijaya "<<endl;
        cout<<" Praktiik : Klinink Sinar sehat Malang"<<endl;
        hargadokter = 150000;
        temp_jeniskonsul = jenis_konsultasi[0];
        temp_NoChat = nomor[0];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[0]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 8 :
        hargadokter = 150000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr.Agni anatasia Sp.KK    "<<endl;
        cout<<"|  Profil | "<< " Dokter kulit "<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.00997654"<<endl;
        cout<<" Alumni   : Universitas Indonesia "<<endl;
        cout<<" Praktiik : Klinink Utama Rahma Malang"<<endl;
        hargadokter = 150000;
        temp_jeniskonsul = jenis_konsultasi[0];
        temp_NoChat = nomor[0];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[0]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 9 :
        hargadokter = 150000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr.Febriana Sp.KK "<<endl;
        cout<<"|  Profil | "<< " Dokter kulit "<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.3.1.602.3.16.9909887"<<endl;
        cout<<" Alumni   : Universitas Indonesia "<<endl;
        cout<<" Praktiik : Klinink Utama Madura"<<endl;
        hargadokter = 150000;
        temp_jeniskonsul = jenis_konsultasi[0];
        temp_NoChat = nomor[0];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[0]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 10 :
        hargadokter = 150000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr.Keni Istasaputri Sp.KK "<<endl;
        cout<<"|  Profil | "<< " Dokter kulit "<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.006721"<<endl;
        cout<<" Alumni   : Universitas Indonesia "<<endl;
        cout<<" Praktiik : Klinink Utama M3 Bogor"<<endl;
        hargadokter = 150000;
        temp_jeniskonsul = jenis_konsultasi[0];
        temp_NoChat = nomor[0];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[0]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      
      }
      
    }
    else if (pilihsp == 2){
		cout<<endl<<"===================== Dokter Spesialis Psikolog ================="<<endl;
    cout<<endl;
		cout<<" 1.) Aenea Marella, S.Psi., M.Psi., Psikolog            Rp 375.000"<<endl;
    cout<<" 2.) Ana Muflihatun, S.Psi, M.Psi,                      Rp 600.000"<<endl;
    cout<<" 3.) dra. Anita Mayanti,                                Rp 650.000"<<endl;
    cout<<" 4.) Cecilia Sagita, S.Psi., M.Psi., Psikolog           Rp 375.000"<<endl;
    cout<<" 5.) Farah Oktamurdiantri, M.Psi.                       Rp 600.000"<<endl;
    cout<<" 6.) Farisha Silviana Yasmine, S.Psi., M.Psi.,          Rp 310.000"<<endl;
    cout<<" 7.) Febriani Sabatini Sirojudin Abbas, S.Psi           Rp 150.000"<<endl;
    cout<<" 8.) Iffah Fitri Nur Khasanah, S.Psi., M.Psi.           Rp 650.000"<<endl;
    cout<<" 9.) Irsa Mirzana, S.Psi., M.Psi.                       Rp 650.000"<<endl;
    cout<<" 10.) Kurnia Juniaty Paulina Lumbanbatu, S.Psi., M.Psi. Rp 600.000"<<endl;
		cout<<"======================================================================="<< endl;
		cout<<"Masukkan pilihan jam dan dokter (1-10) : ";
		cin>>pilihdokter;
		switch (pilihdokter){
			case 1 :
        hargadokter = 375000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " Aenea Marella, S.Psi., M.Psi., Psikolog "<<endl;
        cout<<"|  Profil | "<< " Dokter "<<jenis_konsultasi[1]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.006721"<<endl;
        cout<<" Alumni   : Universitas Indonesia "<<endl;
        cout<<" Praktiik : Klinink Utama M3 Bogor"<<endl;
        hargadokter = 375000;
        temp_jeniskonsul = jenis_konsultasi[1];
        temp_NoChat = nomor[1];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[1]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 2 :
        hargadokter = 600000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " Ana Muflihatun, S.Psi, M.Psi,  "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[1]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.2.1.602.4.11.9976463"<<endl;
        cout<<" Alumni   : Universitas Gadjah Mada "<<endl;
        cout<<" Praktiik : Klinink Sudarsuna"<<endl;
        hargadokter = 600000;
        temp_jeniskonsul = jenis_konsultasi[1];
        temp_NoChat = nomor[1];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[1]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 3 :
        hargadokter = 650000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dra. Anita Mayanti, "<<endl;
        cout<<"|  Profil | "<< " Dokter "<<jenis_konsultasi[1]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 41.2.1.602.5.14.87349837"<<endl;
        cout<<" Alumni   : Universitas Indonesia "<<endl;
        cout<<" Praktiik : Klinik Huna Bunda"<<endl;
        hargadokter = 650000;
        temp_jeniskonsul = jenis_konsultasi[1];
        temp_NoChat = nomor[1];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[1]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 4 :
        hargadokter = 375000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " Cecilia Sagita, S.Psi., M.Psi.    "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[1]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 91.8.1.602.2.18.0032732"<<endl;
        cout<<" Alumni   : Universitas Bekasi "<<endl;
        cout<<" Praktiik : Klinink Rumi Pangkalpinang"<<endl;
        hargadokter = 375000;
        temp_jeniskonsul = jenis_konsultasi[1];
        temp_NoChat = nomor[1];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[1]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;

        case 5 :
        hargadokter = 600000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " Farah Oktamurdiantri, M.Psi  "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[1]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 11.2.1.602.3.19.262362878"<<endl;
        cout<<" Alumni   : Universitas Pelita Harapan "<<endl;
        cout<<" Praktiik : Klinink Utama Bandung"<<endl;
        hargadokter = 600000;
        temp_jeniskonsul = jenis_konsultasi[1];
        temp_NoChat = nomor[1];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[4]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      
      case 6 :
        hargadokter = 310000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " Farisha Silviana Yasmine, S.Psi., M.Psi.,             "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[1]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.2.1.602.3.14.72327838"<<endl;
        cout<<" Alumni   : Universitas Lampung "<<endl;
        cout<<" Praktiik : Klinink Utama Jogja"<<endl;
        hargadokter = 310000;
        temp_jeniskonsul = jenis_konsultasi[1];
        temp_NoChat = nomor[1];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[1]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      
      case 7 :
        hargadokter = 150000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " Febriani Sabatini Sirojudin Abbas, S.Psi    "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[1]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.0006789"<<endl;
        cout<<" Alumni   : Universitas Brawijaya "<<endl;
        cout<<" Praktiik : Klinink Sinar sehat Malang"<<endl;
        hargadokter = 150000;
        temp_jeniskonsul = jenis_konsultasi[1];
        temp_NoChat = nomor[1];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[1]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      case 8 :
        hargadokter = 650000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " Iffah Fitri Nur Khasanah, S.Psi., M.Psi.     "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[1]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.9308348"<<endl;
        cout<<" Alumni   : Universitas Indonesia "<<endl;
        cout<<" Praktiik : Klinink Utama Rahma Malang"<<endl;
        hargadokter = 650000;
        temp_jeniskonsul = jenis_konsultasi[1];
        temp_NoChat = nomor[1];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[1]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
  
      case 9 :
        hargadokter = 650000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " Irsa Mirzana, S.Psi., M.Psi.        "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[1]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.3.1.602.3.16.9909887"<<endl;
        cout<<" Alumni   : Universitas Indonesia "<<endl;
        cout<<" Praktiik : Klinink Utama Madura"<<endl;
        hargadokter = 650000;
        temp_jeniskonsul = jenis_konsultasi[1];
        temp_NoChat = nomor[1];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[1]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 10 :
        hargadokter = 600000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr.Keni Istasaputri Sp.KK "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[1]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.006721"<<endl;
        cout<<" Alumni   : Universitas Indonesia "<<endl;
        cout<<" Praktiik : Klinink Utama M3 Bogor"<<endl;
        hargadokter = 600000;
        temp_jeniskonsul = jenis_konsultasi[1];
        temp_NoChat = nomor[1];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[1]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
  				break;
      }
    }
    else if (pilihsp == 3){
		cout<<endl<<"===================== Dokter Spesialis Jiwa ================="<<endl;
    cout<<endl;
		cout<<" 1.) dr. Endang Septiningsih, Sp.KJ                     Rp 150.000"<<endl;
    cout<<" 2.) drg. Pramodanti Jiwanakusuma, Sp.KG                Rp 250.000"<<endl;
    cout<<" 3.) dr. Mega Dhestiana Sp.KJ                           Rp 145.000"<<endl;
    cout<<" 4.) dr. Hidajah, Sp.KJ                                 Rp 300.000"<<endl;
    cout<<" 5.) dr. Wahyudi, Sp.KJ                                 Rp 125.000"<<endl;
    cout<<" 6.) dr. Leman, Sp.KJ., M.Kes                           Rp 220.000"<<endl;
    cout<<" 7.) dr. Yongky, Sp.KJ                                  Rp 267.000"<<endl;
    cout<<" 8.) dr. Arasy Nanda, SP.KJ                             Rp 219.000"<<endl;
    cout<<" 9.) dr. Catur Bawono, Sp.KJ                            Rp 198.000"<<endl;
    cout<<" 10.) dr. Dahsriati, S., Sp.KJ                          Rp 400.000"<<endl;
		cout<<"======================================================================="<< endl;
		cout<<"Masukkan pilihan jam dan dokter (1-10) : ";
		cin>>pilihdokter;
		switch (pilihdokter){
			case 1 :
        hargadokter = 150000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Endang Septiningsih, Sp.KJ     "<<endl;
        cout<<"|  Profil | "<< " Dokter "<<jenis_konsultasi[2]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.82740187"<<endl;
        cout<<" Alumni   : Universitas Indonesia "<<endl;
        cout<<" Praktiik : Klinink Utama Padang"<<endl;
        hargadokter = 150000;
        temp_jeniskonsul = jenis_konsultasi[2];
        temp_NoChat = nomor[2];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[2]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 2 :
        hargadokter = 250000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "drg. Pramodanti Jiwanakusuma, Sp.KG   "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[2]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.2.1.602.4.11.89203474"<<endl;
        cout<<" Alumni   : Universitas Mecu Buana "<<endl;
        cout<<" Praktiik : Klinink Ngaliyan Semarang"<<endl;
        hargadokter = 250000;
        temp_jeniskonsul = jenis_konsultasi[2];
        temp_NoChat = nomor[2];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[2]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 3 :
        hargadokter = 145000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Mega Dhestiana Sp.KJ  "<<endl;
        cout<<"|  Profil | "<< " Dokter "<<jenis_konsultasi[2]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 41.2.1.602.5.14.9302837"<<endl;
        cout<<" Alumni   : Universitas Indonesia "<<endl;
        cout<<" Praktiik : Klinik Bandung Buah Batu"<<endl;
        hargadokter = 650000;
        temp_jeniskonsul = jenis_konsultasi[2];
        temp_NoChat = nomor[2];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[2]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 4 :
        hargadokter = 300000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Hidajah, Sp.KJ     "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[2]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 91.8.1.602.2.18.9287922"<<endl;
        cout<<" Alumni   : Universitas Bekasi "<<endl;
        cout<<" Praktiik : Klinink Rumi Pangkalpinang"<<endl;
        hargadokter = 300000;
        temp_jeniskonsul = jenis_konsultasi[2];
        temp_NoChat = nomor[2];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[2]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;

        case 5 :
        hargadokter = 125000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Wahyudi, Sp.KJ      "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[2]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 11.2.1.602.3.19.262362878"<<endl;
        cout<<" Alumni   : Universitas Pelita Harapan "<<endl;
        cout<<" Praktiik : Klinink Utama Bandung"<<endl;
        hargadokter = 125000;
        temp_jeniskonsul = jenis_konsultasi[2];
        temp_NoChat = nomor[2];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[2]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      
      case 6 :
        hargadokter = 220000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Leman, Sp.KJ., M.Kes ,             "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[2]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.2.1.602.3.14.823048"<<endl;
        cout<<" Alumni   : Universitas Brawijaya "<<endl;
        cout<<" Praktiik : Klinink Sinar mas sehat"<<endl;
        hargadokter = 220000;
        temp_jeniskonsul = jenis_konsultasi[2];
        temp_NoChat = nomor[2];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[2]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      
      case 7 :
        hargadokter = 267000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "dr. Yongky, Sp.KJ     "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[2]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.0006789"<<endl;
        cout<<" Alumni   : Universitas Brawijaya "<<endl;
        cout<<" Praktiik : Klinink Sinar sehat Malang"<<endl;
        hargadokter = 267000;
        temp_jeniskonsul = jenis_konsultasi[2];
        temp_NoChat = nomor[2];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[2]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      case 8 :
        hargadokter = 219000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Arasy Nanda, SP.KJ       "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[2]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.8293917"<<endl;
        cout<<" Alumni   : Universitas Indonesia "<<endl;
        cout<<" Praktiik : Klinink Utama Rahma Malang"<<endl;
        hargadokter = 219000;
        temp_jeniskonsul = jenis_konsultasi[2];
        temp_NoChat = nomor[2];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[2]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
  
      case 9 :
        hargadokter = 198000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "  dr. Catur Bawono, Sp.KJ          "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[2]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.3.1.602.3.16.82927472"<<endl;
        cout<<" Alumni   : Universitas Madura "<<endl;
        cout<<" Praktiik : Rumah Sakit Jogja"<<endl;
        hargadokter = 198000;
        temp_jeniskonsul = jenis_konsultasi[2];
        temp_NoChat = nomor[2];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[2]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 10 :
        hargadokter = 400000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Dahsriati, S., Sp.KJ "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[2]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.006721"<<endl;
        cout<<" Alumni   : Universitas Indonesia "<<endl;
        cout<<" Praktiik : Klinink Utama M3 Bogor"<<endl;
        hargadokter = 400000;
        temp_jeniskonsul = jenis_konsultasi[2];
        temp_NoChat = nomor[2];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[2]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
  				break;
      }
    }
    else if (pilihsp == 4){
		cout<<endl<<"===================== Dokter Spesialis Kandungan ================="<<endl;
    cout<<endl;
		cout<<" 1.) dr. Andri Putranda Aswar Sp.OG                     Rp 175.000"<<endl;
    cout<<" 2.) dr. Devi Marischa Malik, Sp.OG                     Rp 230.000"<<endl;
    cout<<" 3.) dr. Puspita Desi Sugiarto, Sp.OG                   Rp 125.000"<<endl;
    cout<<" 4.) dr. Ivolay Welasi Margret Dachi, Sp.OG             Rp 230.000"<<endl;
    cout<<" 5.) Dr. dr. Wita Saraswati, Sp.OG (K) Onk              Rp 535.000"<<endl;
    cout<<" 6.) Dr. dr. Wita Saraswati, Sp.OG (K) Onk              Rp 535.000"<<endl;
    cout<<" 7.) dr. Rikki Fitriyadi, Sp.OG                         Rp 218.000"<<endl;
    cout<<" 8.) dr. Pungky Mulawardhana, Sp.OG (K) Onk             Rp 535.000"<<endl;
    cout<<" 9.) dr. Iskandar Mirza, Sp.OG                          Rp 230.000"<<endl;
    cout<<" 10.) dr. Hj.D.Dian Indahwati, Sp.OG                    Rp 180.000"<<endl;
		cout<<"======================================================================="<< endl;
		cout<<"Masukkan pilihan jam dan dokter (1-10) : ";
		cin>>pilihdokter;
		switch (pilihdokter){
			case 1 :
        hargadokter = 175000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Andri Putranda Aswar Sp.OG      "<<endl;
        cout<<"|  Profil | "<< " Dokter "<<jenis_konsultasi[3]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.0927389"<<endl;
        cout<<" Alumni   : Universitas Lampung"<<endl;
        cout<<" Praktiik : Klinink Bandar Lampung"<<endl;
        hargadokter = 175000;
        temp_jeniskonsul = jenis_konsultasi[3];
        temp_NoChat = nomor[3];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[3]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 2 :
        hargadokter = 230000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "dr. Devi Marischa Malik, Sp.OG      "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[3]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.2.1.602.4.11.828745"<<endl;
        cout<<" Alumni   : Universitas Mecu Buana "<<endl;
        cout<<" Praktiik : Klinink Metro"<<endl;
        hargadokter = 230000;
        temp_jeniskonsul = jenis_konsultasi[3];
        temp_NoChat = nomor[3];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[3]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 3 :
        hargadokter = 125000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "dr. Puspita Desi Sugiarto, Sp.OG   "<<endl;
        cout<<"|  Profil | "<< " Dokter "<<jenis_konsultasi[3]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 41.2.1.602.5.14.1729749"<<endl;
        cout<<" Alumni   : Universitas lampung "<<endl;
        cout<<" Praktiik : Klinik Mataram Baru"<<endl;
        hargadokter = 125000;
        temp_jeniskonsul = jenis_konsultasi[3];
        temp_NoChat = nomor[3];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[3]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 4 :
        hargadokter = 230000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Ivolay Welasi Margret Dachi, Sp.OG     "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[3]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 91.8.1.602.2.18.2839462"<<endl;
        cout<<" Alumni   : Universitas Negri Yogyakarta "<<endl;
        cout<<" Praktiik : Klinink Rumi Riau"<<endl;
        hargadokter = 230000;
        temp_jeniskonsul = jenis_konsultasi[3];
        temp_NoChat = nomor[3];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[3]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;

        case 5 :
        hargadokter = 535000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " Dr. dr. Wita Saraswati, Sp.OG (K) Onk      "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[3]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 11.2.1.602.3.19.37392727"<<endl;
        cout<<" Alumni   : Universitas Pelita Harapan "<<endl;
        cout<<" Praktiik : Klinink Utama Bandung"<<endl;
        hargadokter = 535000;
        temp_jeniskonsul = jenis_konsultasi[3];
        temp_NoChat = nomor[3];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[3]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      
      case 6 :
        hargadokter = 535000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " Dr. dr. Wita Saraswati, Sp.OG (K) Onk             "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[3]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.2.1.602.3.14.8739627"<<endl;
        cout<<" Alumni   : Universitas Metro "<<endl;
        cout<<" Praktiik : Klinink Mentari"<<endl;
        hargadokter = 535000;
        temp_jeniskonsul = jenis_konsultasi[3];
        temp_NoChat = nomor[3];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[3]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      
      case 7 :
        hargadokter = 218000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Rikki Fitriyadi, Sp.OG      "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[3]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.9273777"<<endl;
        cout<<" Alumni   : Universitas Lampung "<<endl;
        cout<<" Praktiik : Klinink Ibu kita"<<endl;
        hargadokter = 218000;
        temp_jeniskonsul = jenis_konsultasi[3];
        temp_NoChat = nomor[3];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[3]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      case 8 :
        hargadokter = 535000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Pungky Mulawardhana, Sp.OG (K) Onk     "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[3]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.6623919"<<endl;
        cout<<" Alumni   : Universitas Indonesia "<<endl;
        cout<<" Praktiik : Klinink Utama Rahma Malang"<<endl;
        hargadokter = 535000;
        temp_jeniskonsul = jenis_konsultasi[3];
        temp_NoChat = nomor[3];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[3]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
  
      case 9 :
        hargadokter = 230000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Iskandar Mirza, Sp.OG            "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[3]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.3.1.602.3.16.1689373"<<endl;
        cout<<" Alumni   : Universitas Padang "<<endl;
        cout<<" Praktiik : Rumah Sakit Jambi"<<endl;
        hargadokter = 230000;
        temp_jeniskonsul = jenis_konsultasi[3];
        temp_NoChat = nomor[3];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[3]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 10 :
        hargadokter = 180000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "  dr. Hj.D.Dian Indahwati, Sp.OG  "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[3]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.8828401"<<endl;
        cout<<" Alumni   : Universitas Indonesia "<<endl;
        cout<<" Praktiik : Klinink Utama M3 Bogor"<<endl;
        hargadokter = 180000;
        temp_jeniskonsul = jenis_konsultasi[3];
        temp_NoChat = nomor[3];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[3]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
  				break;
      }
    }
    else if (pilihsp == 5){
		cout<<endl<<"===================== Dokter Spesialis Anak ================="<<endl;
    cout<<endl;
		cout<<" 1.) dr. Merry Lia Desvina, Sp.A                        Rp 219.000"<<endl;
    cout<<" 2.) dr. Reza Abdussalam, Sp.A                          Rp 440.000"<<endl;
    cout<<" 3.) dr. Anak Agung Istri Ratih Kemala Dewi, Sp.M       Rp 155.000"<<endl;
    cout<<" 4.) dr. Iqbal Alamsah Hardi Galuh, Sp.A                Rp 250.000"<<endl;
    cout<<" 5.) dr. Hermawan, Sp.A                                 Rp 300.000"<<endl;
    cout<<" 6.) Prof. DR. dr. Soedjatmiko, Sp.A(K)., M.Si          Rp 520.000"<<endl;
    cout<<" 7.) dr. Herlina Nindyastuti, M.Sc., Sp.A               Rp 230.000"<<endl;
    cout<<" 8.) dr. Rizky Amrullah Nasution, Sp.A                  Rp 230.000"<<endl;
    cout<<" 9.) dr. Bramtama Sukma Mulia, Sp.A, M.Biomed           Rp 230.000"<<endl;
    cout<<" 10.) dr. Sri Hastuti Andayani, Sp.A                    Rp 400.000"<<endl;
		cout<<"======================================================================="<< endl;
		cout<<"Masukkan pilihan jam dan dokter (1-10) : ";
		cin>>pilihdokter;
		switch (pilihdokter){
			case 1 :
        hargadokter = 219000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "  dr. Merry Lia Desvina, Sp.A         "<<endl;
        cout<<"|  Profil | "<< " Dokter "<<jenis_konsultasi[4]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.26299238"<<endl;
        cout<<" Alumni   : Universitas Lampung"<<endl;
        cout<<" Praktiik : Klinink Bandar Lampung"<<endl;
        hargadokter = 219000;
        temp_jeniskonsul = jenis_konsultasi[4];
        temp_NoChat = nomor[4];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[4]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 2 :
        hargadokter = 440000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "dr. Reza Abdussalam, Sp.A        "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[4]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.2.1.602.4.11.182739276"<<endl;
        cout<<" Alumni   : Universitas Lampung "<<endl;
        cout<<" Praktiik : Klinink Lampung Permata"<<endl;
        hargadokter = 440000;
        temp_jeniskonsul = jenis_konsultasi[4];
        temp_NoChat = nomor[4];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[4]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 3 :
        hargadokter = 155000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Anak Agung Istri Ratih Kemala Dewi, Sp.M  "<<endl;
        cout<<"|  Profil | "<< " Dokter "<<jenis_konsultasi[4]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 41.2.1.602.5.14.72927366"<<endl;
        cout<<" Alumni   : Universitas lampung "<<endl;
        cout<<" Praktiik : Klinik Mataram Baru"<<endl;
        hargadokter = 155000;
        temp_jeniskonsul = jenis_konsultasi[4];
        temp_NoChat = nomor[4];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[4]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 4 :
        hargadokter = 250000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "dr. Iqbal Alamsah Hardi Galuh, Sp.A      "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[3]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 91.8.1.602.2.18.554389"<<endl;
        cout<<" Alumni   : Universitas Gadjah Mada "<<endl;
        cout<<" Praktiik : Klinink Rumi Jogja"<<endl;
        hargadokter = 250000;
        temp_jeniskonsul = jenis_konsultasi[4];
        temp_NoChat = nomor[4];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[4]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;

        case 5 :
        hargadokter = 300000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Hermawan, Sp.A       "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[4]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 11.2.1.602.3.19.99276926"<<endl;
        cout<<" Alumni   : Universitas Lampung "<<endl;
        cout<<" Praktiik : Klinink Permata Lampung Tengah"<<endl;
        hargadokter = 300000;
        temp_jeniskonsul = jenis_konsultasi[4];
        temp_NoChat = nomor[4];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[4]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      
      case 6 :
        hargadokter = 520000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " Prof. DR. dr. Soedjatmiko, Sp.A(K)., M.Si              "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[4]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.2.1.602.3.14.28837729"<<endl;
        cout<<" Alumni   : Universitas Malahayati "<<endl;
        cout<<" Praktiik : Klinink Simpang Permata"<<endl;
        hargadokter = 520000;
        temp_jeniskonsul = jenis_konsultasi[4];
        temp_NoChat = nomor[4];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[4]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      
      case 7 :
        hargadokter = 230000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "dr. Herlina Nindyastuti, M.Sc., Sp.A     "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[4]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.7282802"<<endl;
        cout<<" Alumni   : Universitas Lampung "<<endl;
        cout<<" Praktiik : Klinink Ibu kita"<<endl;
        hargadokter = 230000;
        temp_jeniskonsul = jenis_konsultasi[4];
        temp_NoChat = nomor[4];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[4]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      case 8 :
        hargadokter = 230000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Rizky Amrullah Nasution, Sp.A       "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[4]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.273862"<<endl;
        cout<<" Alumni   : Universitas Jambi "<<endl;
        cout<<" Praktiik : Klinink Utama Rahma Malang"<<endl;
        hargadokter = 230000;
        temp_jeniskonsul = jenis_konsultasi[4];
        temp_NoChat = nomor[4];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[4]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
  
      case 9 :
        hargadokter = 230000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Bramtama Sukma Mulia, Sp.A, M.Biomed            "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[4]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.3.1.602.3.16.2729912"<<endl;
        cout<<" Alumni   : Universitas Padang "<<endl;
        cout<<" Praktiik : Rumah Sakit Jambi"<<endl;
        hargadokter = 230000;
        temp_jeniskonsul = jenis_konsultasi[4];
        temp_NoChat = nomor[4];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[4]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 10 :
        hargadokter = 400000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "  dr. Sri Hastuti Andayani, Sp.A   "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[4]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.126385"<<endl;
        cout<<" Alumni   : Universitas papua "<<endl;
        cout<<" Praktiik : Klinink Utama M3 Papua"<<endl;
        hargadokter = 400000;
        temp_jeniskonsul = jenis_konsultasi[4];
        temp_NoChat = nomor[4];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[4]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
  				break;
      }
    }
    else if (pilihsp == 6){
		cout<<endl<<"===================== Dokter Spesialis Penyakit Dalam ================="<<endl;
    cout<<endl;
		cout<<" 1.) dr. Hady, Sp.PD                                    Rp 175.000"<<endl;
    cout<<" 2.) dr. Laura Harris, Sp.PD, M.Sc                      Rp 300.000"<<endl;
    cout<<" 3.) dr. Yhan Batista, Sp.PD                            Rp 207.000"<<endl;
    cout<<" 4.) dr. Didi Yuda Putra, Sp.PD                         Rp 90.000"<<endl;
    cout<<" 5.) dr. William M.T. Simanjuntak, Sp.PD                Rp 230.000"<<endl;
    cout<<" 6.) dr. Hery Agung Samsu Alam, Sp.PD                   Rp 165.000"<<endl;
    cout<<" 7.) dr. Estie Puspitasari Sp.PD                        Rp 300.000"<<endl;
    cout<<" 8.) dr. Heni Retnowulan M.Kes. Sp.PD-KP                Rp 175.000"<<endl;
    cout<<" 9.) dr. Anindia Larasati Sp.PD b                       Rp 300.000"<<endl;
    cout<<" 10.) dr. Catharina Triwikatmani M.Kes. Sp.PD-KGEH      Rp 175.000"<<endl;
		cout<<"======================================================================="<< endl;
		cout<<"Masukkan pilihan jam dan dokter (1-10) : ";
		cin>>pilihdokter;
		switch (pilihdokter){
			case 1 :
        hargadokter = 175000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "  dr. Hady, Sp.PD          "<<endl;
        cout<<"|  Profil | "<< " Dokter "<<jenis_konsultasi[5]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.8736477"<<endl;
        cout<<" Alumni   : Universitas Lebanon"<<endl;
        cout<<" Praktiik : Klinink M4 Jakarta"<<endl;
        hargadokter = 175000;
        temp_jeniskonsul = jenis_konsultasi[5];
        temp_NoChat = nomor[5];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[5]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 2 :
        hargadokter = 300000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "dr. Laura Harris, Sp.PD, M.Sc       "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[5]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.2.1.602.4.11.1174740"<<endl;
        cout<<" Alumni   : Universitas Majalengka "<<endl;
        cout<<" Praktiik : Klinink 5 B3 permata Metro"<<endl;
        hargadokter = 300000;
        temp_jeniskonsul = jenis_konsultasi[5];
        temp_NoChat = nomor[5];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[5]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 3 :
        hargadokter = 207000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Yhan Batista, Sp.PD  "<<endl;
        cout<<"|  Profil | "<< " Dokter "<<jenis_konsultasi[5]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 41.2.1.602.5.14.783263617"<<endl;
        cout<<" Alumni   : Universitas Jaya pura "<<endl;
        cout<<" Praktiik : Klinik Biak A53"<<endl;
        hargadokter = 207000;
        temp_jeniskonsul = jenis_konsultasi[5];
        temp_NoChat = nomor[5];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[5]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 4 :
        hargadokter = 90000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "dr. Didi Yuda Putra, Sp.PD     "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[5]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 91.8.1.602.2.18.77126523"<<endl;
        cout<<" Alumni   : Universitas Gadjah Mada "<<endl;
        cout<<" Praktiik : Klinink Rumi B5 Bantul Jogja"<<endl;
        hargadokter = 90000;
        temp_jeniskonsul = jenis_konsultasi[5];
        temp_NoChat = nomor[5];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[5]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;

        case 5 :
        hargadokter = 230000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. William M.T. Simanjuntak, Sp.PD         "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[5]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 11.2.1.602.3.19.78236727"<<endl;
        cout<<" Alumni   : Universitas Lampung Timur"<<endl;
        cout<<" Praktiik : Klinink Indah Lampung baru"<<endl;
        hargadokter = 230000;
        temp_jeniskonsul = jenis_konsultasi[5];
        temp_NoChat = nomor[5];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[5]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      
      case 6 :
        hargadokter = 165000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Hery Agung Samsu Alam, Sp.PD               "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[5]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.2.1.602.3.14.1167537"<<endl;
        cout<<" Alumni   : ITERA "<<endl;
        cout<<" Praktiik : Klinink Simpang Ranu Palembang"<<endl;
        hargadokter = 165000;
        temp_jeniskonsul = jenis_konsultasi[5];
        temp_NoChat = nomor[5];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[5]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      
      case 7 :
        hargadokter = 300000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "dr. Estie Puspitasari Sp.PD     "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[5]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.552827"<<endl;
        cout<<" Alumni   : ITB "<<endl;
        cout<<" Praktiik : Klinink Ibu Bunda sari"<<endl;
        hargadokter = 300000;
        temp_jeniskonsul = jenis_konsultasi[5];
        temp_NoChat = nomor[5];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[5]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      case 8 :
        hargadokter = 175000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Heni Retnowulan M.Kes. Sp.PD-KP      "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[5]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.0063745"<<endl;
        cout<<" Alumni   : Universitas Negri Surabaya "<<endl;
        cout<<" Praktiik : Klinink Utama Rahma "<<endl;
        hargadokter = 175000;
        temp_jeniskonsul = jenis_konsultasi[5];
        temp_NoChat = nomor[5];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[5]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
  
      case 9 :
        hargadokter = 300000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Anindia Larasati Sp.PD b             "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[5]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.3.1.602.3.16.119873"<<endl;
        cout<<" Alumni   : Universitas Aceh "<<endl;
        cout<<" Praktiik : Rumah Sakit Malang"<<endl;
        hargadokter = 300000;
        temp_jeniskonsul = jenis_konsultasi[5];
        temp_NoChat = nomor[5];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[5]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 10 :
        hargadokter = 175000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "  dr. Catharina Triwikatmani M.Kes. Sp.PD-KGEH   "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[5]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.118376"<<endl;
        cout<<" Alumni   : Universitas Lampung "<<endl;
        cout<<" Praktiik : Klinink Utama M3 Malang"<<endl;
        hargadokter = 175000;
        temp_jeniskonsul = jenis_konsultasi[5];
        temp_NoChat = nomor[5];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[5]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
  				break;
      }
    }
    else if (pilihsp == 7){
		cout<<endl<<"===================== Dokter Spesialis Gigi ================="<<endl;
    cout<<endl;
		cout<<" 1.) drg. Diva                                          Rp 175.000"<<endl;
    cout<<" 2.) drg. Fadhilla                                      Rp 105.000"<<endl;
    cout<<" 3.) drg. Faidah, Sp.KG                                 Rp 295.000"<<endl;
    cout<<" 4.) drg. Ghana                                         Rp 100.000"<<endl;
    cout<<" 5.) drg. Giswari                                       Rp 178.000"<<endl;
    cout<<" 6.) drg. Hardiningrum  Dokter Gigi                     Rp 30.000"<<endl;
    cout<<" 7.) drg. Karina                                        Rp 178.000"<<endl;
    cout<<" 8.) drg. Lieanda                                       Rp 145.000"<<endl;
    cout<<" 9.) drg. Mahardhika, Sp.KG                             Rp 350.000"<<endl;
    cout<<" 10.) drg. Marceline, Sp.KG                             Rp 150.000"<<endl;
		cout<<"======================================================================="<< endl;
		cout<<"Masukkan pilihan jam dan dokter (1-10) : ";
		cin>>pilihdokter;
		switch (pilihdokter){
			case 1 :
        hargadokter = 175000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " drg. Diva         "<<endl;
        cout<<"|  Profil | "<< " Dokter "<<jenis_konsultasi[6]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.117823"<<endl;
        cout<<" Alumni   : Universitas Kuala Lumpur"<<endl;
        cout<<" Praktiik : Klinink Bandar Turi"<<endl;
        hargadokter = 175000;
        temp_jeniskonsul = jenis_konsultasi[6];
        temp_NoChat = nomor[6];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[6]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 2 :
        hargadokter = 105000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "drg. Fadhilla          "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[6]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.2.1.602.4.11.4425278"<<endl;
        cout<<" Alumni   : Universitas Riau "<<endl;
        cout<<" Praktiik : Klinink Permata Runi"<<endl;
        hargadokter = 105000;
        temp_jeniskonsul = jenis_konsultasi[6];
        temp_NoChat = nomor[6];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[6]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 3 :
        hargadokter = 295000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " drg. Faidah, Sp.KG  "<<endl;
        cout<<"|  Profil | "<< " Dokter "<<jenis_konsultasi[6]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 41.2.1.602.5.14.335488"<<endl;
        cout<<" Alumni   : Universitas Batam "<<endl;
        cout<<" Praktiik : Klinik Sribahono"<<endl;
        hargadokter = 295000;
        temp_jeniskonsul = jenis_konsultasi[6];
        temp_NoChat = nomor[6];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[6]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 4 :
        hargadokter = 100000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "drg. Ghana       "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[6]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 91.8.1.602.2.18.891727"<<endl;
        cout<<" Alumni   : Universitas Lampung "<<endl;
        cout<<" Praktiik : Klinink Rumi Jogja"<<endl;
        hargadokter = 100000;
        temp_jeniskonsul = jenis_konsultasi[6];
        temp_NoChat = nomor[6];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[6]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;

        case 5 :
        hargadokter = 178000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " drg. Giswari         "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[6]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 11.2.1.602.3.19.77282662"<<endl;
        cout<<" Alumni   : Universitas Lampung "<<endl;
        cout<<" Praktiik : Klinink Permata Lampung Timur"<<endl;
        hargadokter = 178000;
        temp_jeniskonsul = jenis_konsultasi[6];
        temp_NoChat = nomor[6];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[6]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      
      case 6 :
        hargadokter = 30000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " drg. Hardiningrum  Dokter Gigi              "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[6]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.2.1.602.3.14.18272718"<<endl;
        cout<<" Alumni   : Universitas Malahayati "<<endl;
        cout<<" Praktiik : Klinink Simpang Permata"<<endl;
        hargadokter = 30000;
        temp_jeniskonsul = jenis_konsultasi[6];
        temp_NoChat = nomor[6];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[6]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      
      case 7 :
        hargadokter =178000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "drg. Karina     "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[6]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.1110129"<<endl;
        cout<<" Alumni   : Universitas Bangka "<<endl;
        cout<<" Praktiik : Klinink Sehat Sempurna"<<endl;
        hargadokter = 178000;
        temp_jeniskonsul = jenis_konsultasi[6];
        temp_NoChat = nomor[6];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[6]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      case 8 :
        hargadokter = 145000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " drg. Lieanda        "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[6]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.12918282"<<endl;
        cout<<" Alumni   : Universitas Jambi "<<endl;
        cout<<" Praktiik : Klinink Utama Rahma Malang"<<endl;
        hargadokter = 145000;
        temp_jeniskonsul = jenis_konsultasi[6];
        temp_NoChat = nomor[6];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[6]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
  
      case 9 :
        hargadokter = 350000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " drg. Mahardhika, Sp.KG           "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[6]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.3.1.602.3.16.228377"<<endl;
        cout<<" Alumni   : Universitas Jaya pura "<<endl;
        cout<<" Praktiik : Rumah Sakit Biak"<<endl;
        hargadokter = 350000;
        temp_jeniskonsul = jenis_konsultasi[6];
        temp_NoChat = nomor[6];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[6]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 10 :
        hargadokter = 150000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "  drg. Marceline, Sp.KG    "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[6]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.2873726"<<endl;
        cout<<" Alumni   : Universitas papua "<<endl;
        cout<<" Praktiik : Klinink Rina Biak"<<endl;
        hargadokter = 150000;
        temp_jeniskonsul = jenis_konsultasi[6];
        temp_NoChat = nomor[6];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[6]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
  				break;
      }
    }
    else if (pilihsp == 8){
		cout<<endl<<"===================== Dokter Spesialis Umum ================="<<endl;
    cout<<endl;
		cout<<" 1.) dr. Nurmaulida                                     Rp 150.000"<<endl;
    cout<<" 2.) dr. Fadityo                                        Rp 75.000"<<endl;
    cout<<" 3.) dr. Franst                                         Rp 239.000"<<endl;
    cout<<" 4.) dr. Ichsaniar                                      Rp 239.000"<<endl;
    cout<<" 5.) dr. Khoirunnisa                                    Rp 80.000"<<endl;
    cout<<" 6.) dr. Meylia                                         Rp 137.000"<<endl;
    cout<<" 7.) dr. Shela                                          Rp 50.000"<<endl;
    cout<<" 8.) dr. Stefanie                                       Rp 70.000"<<endl;
    cout<<" 9.) dr. Susdiaman                                      Rp 120.000"<<endl;
    cout<<" 10.) dr. Tobrie                                        Rp 350.000"<<endl;
		cout<<"======================================================================="<< endl;
		cout<<"Masukkan pilihan jam dan dokter (1-10) : ";
		cin>>pilihdokter;
		switch (pilihdokter){
			case 1 :
        hargadokter = 150000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "  dr. Nurmaulida         "<<endl;
        cout<<"|  Profil | "<< " Dokter "<<jenis_konsultasi[7]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.2267328"<<endl;
        cout<<" Alumni   : Universitas jambi"<<endl;
        cout<<" Praktiik : Klinink Bandar Teluk"<<endl;
        hargadokter = 150000;
        temp_jeniskonsul = jenis_konsultasi[7];
        temp_NoChat = nomor[7];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[7]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 2 :
        hargadokter = 75000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "dr. Fadityo        "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[7]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.2.1.602.4.11.9023893"<<endl;
        cout<<" Alumni   : Universitas Malang "<<endl;
        cout<<" Praktiik : Klinink Pertiwi"<<endl;
        hargadokter = 75000;
        temp_jeniskonsul = jenis_konsultasi[7];
        temp_NoChat = nomor[7];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[7]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 3 :
        hargadokter = 239000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Franst    "<<endl;
        cout<<"|  Profil | "<< " Dokter "<<jenis_konsultasi[7]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 41.2.1.602.5.14.1192838"<<endl;
        cout<<" Alumni   : Universitas Jember "<<endl;
        cout<<" Praktiik : Klinik Mataram Stu"<<endl;
        hargadokter = 239000;
        temp_jeniskonsul = jenis_konsultasi[7];
        temp_NoChat = nomor[7];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[7]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 4 :
        hargadokter = 239000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Ichsaniar        "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[7]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 91.8.1.602.2.18.1192387"<<endl;
        cout<<" Alumni   : Universitas Negri Surabaya "<<endl;
        cout<<" Praktiik : Klinink W2 lima simpang Randu"<<endl;
        hargadokter = 239000;
        temp_jeniskonsul = jenis_konsultasi[7];
        temp_NoChat = nomor[7];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[7]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;

        case 5 :
        hargadokter =  80000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Khoirunnisa       "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[7]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 11.2.1.602.3.19.6637382"<<endl;
        cout<<" Alumni   : Universitas Jakarta "<<endl;
        cout<<" Praktiik : Klinink Permata W4 jakarta"<<endl;
        hargadokter = 80000;
        temp_jeniskonsul = jenis_konsultasi[7];
        temp_NoChat = nomor[7];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[7]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      
      case 6 :
        hargadokter = 137000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Meylia              "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[7]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.2.1.602.3.14.1827827"<<endl;
        cout<<" Alumni   : Universitas Malahayati "<<endl;
        cout<<" Praktiik : Klinink Simpang Permata"<<endl;
        hargadokter = 137000;
        temp_jeniskonsul = jenis_konsultasi[7];
        temp_NoChat = nomor[7];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[7]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      
      case 7 :
        hargadokter = 50000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "dr. Shela       "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[7]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.82738828"<<endl;
        cout<<" Alumni   : Universitas Lampung "<<endl;
        cout<<" Praktiik : Klinink Ibu kita"<<endl;
        hargadokter = 50000;
        temp_jeniskonsul = jenis_konsultasi[7];
        temp_NoChat = nomor[7];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[7]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      case 8 :
        hargadokter = 70000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Stefanie         "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[7]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.1298233"<<endl;
        cout<<" Alumni   : Universitas Malang "<<endl;
        cout<<" Praktiik : Klinink Utama Rahma Jati Jember"<<endl;
        hargadokter = 70000;
        temp_jeniskonsul = jenis_konsultasi[7];
        temp_NoChat = nomor[7];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[7]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
  
      case 9 :
        hargadokter = 120000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Susdiaman              "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[7]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.3.1.602.3.16.3384940"<<endl;
        cout<<" Alumni   : Universitas Aceh "<<endl;
        cout<<" Praktiik : Klinik Ache islam"<<endl;
        hargadokter = 120000;
        temp_jeniskonsul = jenis_konsultasi[7];
        temp_NoChat = nomor[7];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[7]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 10 :
        hargadokter = 350000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "  dr. Tobrie   "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[7]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.7727627"<<endl;
        cout<<" Alumni   : Universitas papua "<<endl;
        cout<<" Praktiik : Klinink Utama M3 Papua"<<endl;
        hargadokter = 350000;
        temp_jeniskonsul = jenis_konsultasi[7];
        temp_NoChat = nomor[7];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[7]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
  				break;
      }
    }
    else if (pilihsp == 9){
		cout<<endl<<"===================== Dokter Spesialis THT ================="<<endl;
    cout<<endl;
		cout<<" 1.) dr. Risman, Sp.THT                                 Rp 219.000"<<endl;
    cout<<" 2.) dr. Asad, Sp.THT-KL                                Rp 150.000"<<endl;
    cout<<" 3.) dr. Ervina, Sp.THT-KL                              Rp 225.000"<<endl;
    cout<<" 4.) dr. Fairus, Sp.THT                                 Rp 330.000"<<endl;
    cout<<" 5.) dr. Sona, Sp.THT-KL                                Rp 185.000"<<endl;
    cout<<" 6.) dr. Sudjarwadi, Sp.THT-KL                          Rp 239.000"<<endl;
    cout<<" 7.) dr. Agus Santosa, Sp.THT-KL                        Rp 290.000"<<endl;
    cout<<" 8.) dr. Ajeng Putika, Sp.THT                           Rp 239.000"<<endl;
    cout<<" 9.) dr. Aminuddin Azis, Sp.THT-KL                      Rp 330.000"<<endl;
    cout<<" 10.) dr. Bonny Murizky, Sp.THT-KL                      Rp 220.000"<<endl;
		cout<<"======================================================================="<< endl;
		cout<<"Masukkan pilihan jam dan dokter (1-10) : ";
		cin>>pilihdokter;
		switch (pilihdokter){
			case 1 :
        hargadokter = 219000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "  dr. Risman, Sp.THT           "<<endl;
        cout<<"|  Profil | "<< " Dokter "<<jenis_konsultasi[8]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.8273863"<<endl;
        cout<<" Alumni   : Universitas Jember"<<endl;
        cout<<" Praktiik : Klinink U3 Bali"<<endl;
        hargadokter = 219000;
        temp_jeniskonsul = jenis_konsultasi[8];
        temp_NoChat = nomor[8];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[8]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 2 :
        hargadokter = 150000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "dr. Asad, Sp.THT-KL       "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[8]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.2.1.602.4.11.118028379"<<endl;
        cout<<" Alumni   : Universitas Undayana "<<endl;
        cout<<" Praktiik : Klinik Indah Bunda Bali"<<endl;
        hargadokter = 150000;
        temp_jeniskonsul = jenis_konsultasi[8];
        temp_NoChat = nomor[8];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[8]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 3 :
        hargadokter = 225000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Ervina, Sp.THT-KL "<<endl;
        cout<<"|  Profil | "<< " Dokter "<<jenis_konsultasi[8]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 41.2.1.602.5.14.44482738"<<endl;
        cout<<" Alumni   : Universitas Kalimantan Tengah "<<endl;
        cout<<" Praktiik : Klinik Suli dipa permata"<<endl;
        hargadokter = 225000;
        temp_jeniskonsul = jenis_konsultasi[8];
        temp_NoChat = nomor[8];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[8]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 4 :
        hargadokter = 330000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "dr. Fairus, Sp.THT       "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[8]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 91.8.1.602.2.18.99872637"<<endl;
        cout<<" Alumni   : Universitas Gadjah Mada "<<endl;
        cout<<" Praktiik : Klinink Rumi Jogja"<<endl;
        hargadokter = 330000;
        temp_jeniskonsul = jenis_konsultasi[8];
        temp_NoChat = nomor[8];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[8]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;

        case 5 :
        hargadokter = 185000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Sona, Sp.THT-KL       "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[8]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 11.2.1.602.3.19.1162798"<<endl;
        cout<<" Alumni   : Universitas Buluk Linggau "<<endl;
        cout<<" Praktiik : Klinink Permata M3 Aceh"<<endl;
        hargadokter = 185000;
        temp_jeniskonsul = jenis_konsultasi[8];
        temp_NoChat = nomor[8];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[8]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      
      case 6 :
        hargadokter = 239000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Sudjarwadi, Sp.THT-KL              "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[8]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.2.1.602.3.14.8728723"<<endl;
        cout<<" Alumni   : Universitas Malahayati "<<endl;
        cout<<" Praktiik : Klinink Simpang Permata"<<endl;
        hargadokter = 239000;
        temp_jeniskonsul = jenis_konsultasi[8];
        temp_NoChat = nomor[8];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[8]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      
      case 7 :
        hargadokter = 290000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "dr. Agus Santosa, Sp.THT-KL     "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[8]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.98232879"<<endl;
        cout<<" Alumni   : Universitas Lampung "<<endl;
        cout<<" Praktiik : Klinink Ibu kita"<<endl;
        hargadokter = 290000;
        temp_jeniskonsul = jenis_konsultasi[8];
        temp_NoChat = nomor[8];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[8]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      case 8 :
        hargadokter = 239000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Ajeng Putika, Sp.THT        "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[8]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.98127736"<<endl;
        cout<<" Alumni   : Universitas Jambi "<<endl;
        cout<<" Praktiik : Klinink Utama Rahma Malang"<<endl;
        hargadokter = 239000;
        temp_jeniskonsul = jenis_konsultasi[8];
        temp_NoChat = nomor[8];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[8]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
  
      case 9 :
        hargadokter = 330000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Aminuddin Azis, Sp.THT-KL            "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[8]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.3.1.602.3.16.1189273"<<endl;
        cout<<" Alumni   : Universitas Jambi "<<endl;
        cout<<" Praktiik : Rumah Sakit Jambi"<<endl;
        hargadokter = 330000;
        temp_jeniskonsul = jenis_konsultasi[8];
        temp_NoChat = nomor[8];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[8]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 10 :
        hargadokter = 220000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "  dr. Sri Hastuti Andayani, Sp.A   "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[8]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.1190738"<<endl;
        cout<<" Alumni   : Universitas Jaya Pura "<<endl;
        cout<<" Praktiik : Klinink Utama M3 Papua"<<endl;
        hargadokter = 220000;
        temp_jeniskonsul = jenis_konsultasi[8];
        temp_NoChat = nomor[8];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[8]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
  				break;
      }
    }
    else if (pilihsp == 10){
		cout<<endl<<"===================== Dokter Spesialis Paru-Paru ================="<<endl;
    cout<<endl;
		cout<<" 1.) dr. Riana Sari, Sp.P                               Rp 207.000"<<endl;
    cout<<" 2.) dr. Rizqa Kharisma, Sp.P                           Rp 175.000"<<endl;
    cout<<" 3.) dr. Ruri Intania, Sp.P                             Rp 200.000"<<endl;
    cout<<" 4.) dr. Sardikin Giriputra, Sp.P                       Rp 250.000"<<endl;
    cout<<" 5.) dr. Tomu Juliani, Sp.P                             Rp 240.000"<<endl;
    cout<<" 6.) Prof. Dr. dr. Aru Wisaksono Sudoyo, Sp.PD-KHOM     Rp 300.000"<<endl;
    cout<<" 7.) dr. Sutji Mariono, Sp.P                            Rp 450.000"<<endl;
    cout<<" 8.) Dr. Santony Sp.P                                   Rp 175.000"<<endl;
    cout<<" 9.) dr. Subagyo, Sp.P                                  Rp 219.000"<<endl;
    cout<<" 10.) dr. Susaniwati, Sp.P                              Rp 200.000"<<endl;
		cout<<"======================================================================="<< endl;
		cout<<"Masukkan pilihan jam dan dokter (1-10) : ";
		cin>>pilihdokter;
		switch (pilihdokter){
			case 1 :
        hargadokter = 207000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Riana Sari, Sp.P         "<<endl;
        cout<<"|  Profil | "<< " Dokter "<<jenis_konsultasi[9]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.1192938"<<endl;
        cout<<" Alumni   : Universitas Malahayati"<<endl;
        cout<<" Praktiik : Klinink Bunda lampung"<<endl;
        hargadokter = 207000;
        temp_jeniskonsul = jenis_konsultasi[9];
        temp_NoChat = nomor[9];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[9]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 2 :
        hargadokter = 175000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "dr. Rizqa Kharisma, Sp.P        "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[9]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.2.1.602.4.11.28733636"<<endl;
        cout<<" Alumni   : Universitas Papua "<<endl;
        cout<<" Praktiik : Klinink Rizqa Permata "<<endl;
        hargadokter = 175000;
        temp_jeniskonsul = jenis_konsultasi[9];
        temp_NoChat = nomor[9];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[9]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 3 :
        hargadokter = 200000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Ruri Intania, Sp.P   "<<endl;
        cout<<"|  Profil | "<< " Dokter "<<jenis_konsultasi[9]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 41.2.1.602.5.14.4422899"<<endl;
        cout<<" Alumni   : Universitas Batam "<<endl;
        cout<<" Praktiik : Klinik Intan Bunda"<<endl;
        hargadokter = 200000;
        temp_jeniskonsul = jenis_konsultasi[9];
        temp_NoChat = nomor[9];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[9]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 4 :
        hargadokter = 250000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "dr. Sardikin Giriputra, Sp.P       "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[9]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 91.8.1.602.2.18.22398388"<<endl;
        cout<<" Alumni   : Universitas Gadjah Mada "<<endl;
        cout<<" Praktiik : Klinink Rumi Jogja"<<endl;
        hargadokter = 250000;
        temp_jeniskonsul = jenis_konsultasi[9];
        temp_NoChat = nomor[9];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[9]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;

        case 5 :
        hargadokter = 240000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Tomu Juliani, Sp.P        "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[9]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 11.2.1.602.3.19.12132"<<endl;
        cout<<" Alumni   : Universitas Lampung "<<endl;
        cout<<" Praktiik : Klinink Permata "<<endl;
        hargadokter = 240000;
        temp_jeniskonsul = jenis_konsultasi[9];
        temp_NoChat = nomor[9];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[9]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      
      case 6 :
        hargadokter = 300000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " Prof. Dr. dr. Aru Wisaksono Sudoyo, Sp.PD-KHOM             "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[9]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.2.1.602.3.14.11982973"<<endl;
        cout<<" Alumni   : Universitas Malahayati "<<endl;
        cout<<" Praktiik : Klinink Simpang Permata"<<endl;
        hargadokter = 300000;
        temp_jeniskonsul = jenis_konsultasi[9];
        temp_NoChat = nomor[9];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[9]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      
      case 7 :
        hargadokter = 450000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "dr. Sutji Mariono, Sp.P     "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[9]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.22930387"<<endl;
        cout<<" Alumni   : Universitas Lampung Tengah "<<endl;
        cout<<" Praktiik : Klinink Ibu kita Kartini"<<endl;
        hargadokter = 450000;
        temp_jeniskonsul = jenis_konsultasi[9];
        temp_NoChat = nomor[9];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[9]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
      case 8 :
        hargadokter = 175000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " Dr. Santony Sp.P       "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[9]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.2667338"<<endl;
        cout<<" Alumni   : Universitas Jambi "<<endl;
        cout<<" Praktiik : Klinink Utama Rahma Malang"<<endl;
        hargadokter = 175000;
        temp_jeniskonsul = jenis_konsultasi[9];
        temp_NoChat = nomor[9];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[9]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
  
      case 9 :
        hargadokter = 219000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< " dr. Subagyo, Sp.P            "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[9]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 21.3.1.602.3.16.2283739"<<endl;
        cout<<" Alumni   : Universitas Padang "<<endl;
        cout<<" Praktiik : Rumah Sakit Jambi"<<endl;
        hargadokter = 219000;
        temp_jeniskonsul = jenis_konsultasi[9];
        temp_NoChat = nomor[9];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[9]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
				break;
          
      case 10 :
        hargadokter = 200000;
        cout<<"Profil Dokter "<<endl;
				cout<<"+---------+ "<<endl;
        cout<<"|         | "<<endl;
        cout<<"|  Foto   | "<< "  dr. Susaniwati, Sp.P    "<<endl;
        cout<<"|  Profil | "<< " Dokter  "<<jenis_konsultasi[9]<<endl;
        cout<<"|         | "<< hargadokter<<endl;
        cout<<"+---------+ "<<endl;
        cout<<endl;
        cout<<" Tentang Dokter "<<endl;
        cout<<"-----------------"<<endl;
        cout<<" NO. STR  : 31.2.1.602.3.16.20929383"<<endl;
        cout<<" Alumni   : Universitas papua "<<endl;
        cout<<" Praktiik : Klinink Utama M3 Papua"<<endl;
        hargadokter = 200000;
        temp_jeniskonsul = jenis_konsultasi[9];
        temp_NoChat = nomor[9];
        cout<<"Dokter tersedia di Tanggal  : "<<jadwal_dokter[9]<<" Setiap Bulannya "<<endl;
        for (int j = 0; j < 1; j++){
        cout<<"---Pilih Jam Konsultasi---"<<endl;
        cout<<" 13:00-13:30 "<<endl;
        cout<<" 13:30-14:00 "<<endl;
        cout<<" 14:00-14:30 "<<endl;
        cout<<" 14:30-15:00 "<<endl;
        cout<<"Pilih jam Konsultasi : ";
        cin.ignore();
        getline(cin, pasien[j].jam);
          }
  				break;
      }
    }
 }
   for (int k= 0; k < 1; k++) {
    cout << endl <<  "==============================================================="<< endl;
    cout << "          STRUK PEMBAYARAN KONSULTASI " << endl;
    cout << "==============================================================="<< endl;
    cout << "     Jln. Sorosutan No.6B, Umbulharjo, Kota Yogyakarta" << endl;
    cout << " Nama          : " << pasien[k].nama << endl;
    cout << " Umur         : " << pasien[k].umur << endl;
    cout << " No.Hp         : " << pasien[k].no_telepon << endl;
    cout << " Jenis kelamin          : " << pasien[k].jk << endl;
  }
  cout << "-----------------------------------------------------"<< endl;
  cout << " Jenis Konsultasi  - " << temp_jeniskonsul << endl;
  cout << " Harga                                       = " << hargadokter << endl;
  cout << " Jam Konsultasi                                      = " << pasien[j].jam << endl;
  cout << "-----------------------------------------------------"<< endl;
  cout << " Harga Total                                 = " << hargadokter << endl;
  cout << " Bayar                                       = ";
  cin >> bayar;
  kembali=bayar-(hargadokter) ;
  cout << " Kembali                                     = " << kembali << endl;
  cout << "==============================================================="<< endl; 
  cout << endl << "         Terima kasih "<<endl<<endl;

  cout<<" Silahkan Konsultasi sesuai Pesanan"<<endl;
  cout<<"+-----------------------------------------+"<<endl;
  cout<<"| No Chat : "      << temp_NoChat<<"      |"<< endl;
  cout<<"+-----------------------------------------+"<<endl;


  cout<<"+---------------------------------+"<<endl;
  cout<<"| ketik angka 1 untuk selanjutnya |"<<endl;
  cout<<"+---------------------------------+"<<endl;
  }
