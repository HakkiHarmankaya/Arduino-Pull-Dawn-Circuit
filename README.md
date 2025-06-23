# 🔘 Arduino #2: Pull-Down Direnci ile Buton Kontrollü LED Devresi

Bu projede, **pull-down direnci** kullanarak bir **buton ile LED kontrolü** devresi tasarlıyoruz.  
Butona basılmadığında LED sönük kalır, basıldığında ise yanar.

🔗 [Web Siteme Bakmak İçin Tıkla](https://www.hakkiharmankaya.com/)
  
🔗 [Tinkercad Tasarımına Göz At](https://www.tinkercad.com/things/6VC6u6ztNCC?sharecode=fSRYD-hk-hK-PczqlwWClPqQV4uEoZL5I_ewJvEp5mc)

---

## 🧰 Gerekli Malzemeler

- 1 adet **LED**
- 2 adet **direnç** (1×10KΩ ve 1×330Ω/220Ω)
- 7 adet **jumper kablo**
- 1 adet **buton**
- 1 adet **Arduino**
- 1 adet **breadboard**

---

## ⚙️ Adım Adım Devre Kurulumu

### 🔹 Adım 1: Devre Tasarımına Başlayın

- Tinkercad.com gibi bir simülasyon aracına girin.
- **Arduino** ve **Breadboard** bileşenlerini devre alanına sürükleyin.

---

### 🔹 Adım 2: LED ve Direnç Bağlantıları

- Breadboard üzerine **LED** ve **330Ω direnç** yerleştirin.
- **LED’in uzun bacağını** dirence, kısa bacağını **GND’ye** bağlayın.
- **Butonun bir bacağı GND’ye**, diğer bacağı ise **Arduino dijital pin 8’e** bağlanmalıdır.
- **10KΩ pull-down direnci**, butonun GND tarafına paralel olarak bağlanır.

---

### 🔹 Adım 3: Devreyi Kontrol Edin

- Simülasyonu başlatın.
- Butona bastığınızda LED'in yandığını, bıraktığınızda söndüğünü gözlemleyin.

---

### 🔹 Adım 4: Arduino Kodunu Yazın ve Yükleyin

```cpp
void setup() {
  pinMode(8, INPUT);    // Buton girişi
  pinMode(10, OUTPUT);  // LED çıkışı
}

void loop() {
  if (digitalRead(8) == 1) {
    digitalWrite(10, HIGH);  // Butona basıldığında LED yanar
  } else {
    digitalWrite(10, LOW);   // Aksi halde söner
  }
}
