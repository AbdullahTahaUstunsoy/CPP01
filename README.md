Bu modül; bellek tahsisi, işaretçiler ile referanslar arasındaki farklar ve member fonksiyonlara pointerlar gibi C++'ın kritik konseptlerini derinlemesine inceleyen bir projedir.

---

## Özellikler

Modül, temelden ileriye doğru giden şu egzersizleri kapsamaktadır:
- **Zombie Management (ex00-ex01):** Nesnelerin Stack ve Heap üzerinde oluşturulması arasındaki farklar ve bellek sızıntılarının önlenmesi.
- **References (ex02-ex03):** Referansların kullanımı ve bir sınıfa bağımlı nesnelerin (Weapon, HumanA/B) işaretçi veya referans ile yönetimi.
- **Sed is for Losers (ex04):** Dosya akışları (fstream) kullanarak metin değiştirme işlemlerinin gerçekleştirilmesi.
- **Harl 2.0 (ex05-ex06):** İf-else bloklarından kaçınmak için üye fonksiyonlara işaretçi kullanımı ve Switch/Case ile filtreleme mantığı.

---

## Teknik Kazanımlar

Bu modül süresince C++ dilinin şu teknik detaylarında uzmanlık kazandım:
- **Stack vs Heap Allocation:** Nesnelerin yaşam döngüsünü kontrol etmek için doğru bellek alanının seçilmesi ve `new`/`delete` yönetimi.
- **Pointers vs References:** Referansların güvenliği ve işaretçilerin esnekliği arasındaki farkların projeye (HumanA vs HumanB) uygulanması.
- **Pointers to Members:** Sınıf fonksiyonlarının dinamik olarak çağrılması için fonksiyon işaretçilerinin dizilerle entegrasyonu.
- **File Manipulation:** C++ tarzı dosya okuma ve yazma işlemleriyle veri manipülasyonu.



---

## Kurulum ve Kullanım

1. **Depoyu klonlayın:**
   ```bash
   git clone [https://github.com/AbdullahTahaUstunsoy/CPP01.git](https://github.com/AbdullahTahaUstunsoy/CPP01.git)
   cd CPP01
2. Egzersize gidin: Derlemek istediğiniz egzersizin dizinine (Örn: cd ex00) giriş yapın.
3. Derleme yapın: Terminalde make komutunu çalıştırarak kaynak dosyalarını derleyin ve yürütülebilir dosyayı oluşturun.
4. Programı başlatın: Oluşturulan ikili dosyayı (Örn: ./zombie) çalıştırarak fonksiyon çıktılarını test edin.
