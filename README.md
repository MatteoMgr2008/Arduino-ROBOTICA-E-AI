# Arduino - Robotica e AI

🇮🇹 [Italiano](#italiano) | 🇬🇧 [English](#english)

---

<a id="italiano"></a>

## 🇮🇹 Italiano

### 📌 Descrizione

Raccolta di sketch e circuiti **Arduino** realizzati per la materia scolastica **Robotica e AI**. Il repository è organizzato in esercizi svolti in classe e progetti extra; al momento l'unico progetto completo è il **Progetto 4**, mentre le altre cartelle contengono solo un file segnaposto vuoto (`File 0`) in attesa di nuovi contenuti.

### 📂 Contenuto

| Percorso | Descrizione |
|---|---|
| `Esercizi in classe/` | Cartella per gli esercizi svolti in classe (per ora contiene solo il segnaposto `File 0`) |
| `Progetti extra/Progetto 1/`, `Progetto 2/`, `Progetto 3/` | Cartelle riservate a progetti futuri (solo il segnaposto `File 0`) |
| `Progetti extra/Progetto 4 (Accensione di 3 LED in diverso modo con un pulsante)/` | Progetto completo: sketch, file Fritzing e immagini del circuito |

**Progetto 4 – Accensione di 3 LED in diverso modo con un pulsante**

| File | Descrizione |
|---|---|
| `... (Progetto 4).ino` | Sketch Arduino: legge un pulsante sul pin 2 e controlla tre LED sui pin 3 (verde), 4 (bianco) e 5 (rosso) |
| `... (Progetto 4).fzz` | Progetto Fritzing del circuito |
| `... (Vista Breadboard).png` | Immagine del circuito in vista breadboard |
| `... (Vista Schema).png` | Immagine dello schema elettrico |
| `... (Vista PCB).png` | Immagine della vista PCB |

**Funzionamento dello sketch:**
- **Pulsante non premuto:** il LED verde è acceso, mentre il LED bianco e quello rosso sono spenti.
- **Pulsante premuto:** il LED verde si spegne e si accendono il LED bianco e quello rosso.

### 🛠️ Tecnologie utilizzate

- **Arduino** (linguaggio Arduino, basato su C/C++)
- **Fritzing** per la progettazione del circuito (breadboard, schema e PCB)

### ▶️ Come usarlo

1. Apri il file `.ino` con l'**Arduino IDE** (l'IDE potrebbe chiedere di spostarlo in una cartella con lo stesso nome dello sketch: accetta).
2. Collega la scheda Arduino via USB, seleziona scheda e porta in *Strumenti*.
3. Clicca su **Carica** per compilare e caricare lo sketch.
4. Per vedere o modificare il circuito apri il file `.fzz` con **Fritzing**, oppure consulta direttamente le immagini `.png`.

### 📋 Requisiti

- Scheda Arduino (nel circuito è usata una Arduino UNO) e Arduino IDE
- Componenti per il Progetto 4: 1 pulsante, 3 LED (verde, bianco, rosso), 4 resistenze da 1 kΩ (una per ogni LED e una per il pulsante), breadboard e cavi (vedi le immagini del circuito per i collegamenti)
- Fritzing (opzionale, solo per aprire il file `.fzz`)

### 👤 Autore

Realizzato da [MatteoMgr2008](https://github.com/MatteoMgr2008).

---

<a id="english"></a>

## 🇬🇧 English

### 📌 Description

A collection of **Arduino** sketches and circuits made for the school subject **Robotics and AI** (*Robotica e AI*). The repository is organized into in-class exercises and extra projects; at the moment the only complete project is **Project 4**, while the other folders only contain an empty placeholder file (`File 0`) waiting for new content.

### 📂 Contents

| Path | Description |
|---|---|
| `Esercizi in classe/` | Folder for in-class exercises (currently only the `File 0` placeholder) |
| `Progetti extra/Progetto 1/`, `Progetto 2/`, `Progetto 3/` | Folders reserved for future projects (only the `File 0` placeholder) |
| `Progetti extra/Progetto 4 (Accensione di 3 LED in diverso modo con un pulsante)/` | Complete project: sketch, Fritzing file and circuit images |

**Project 4 – Turning on 3 LEDs in different ways with a push button**

| File | Description |
|---|---|
| `... (Progetto 4).ino` | Arduino sketch: reads a push button on pin 2 and drives three LEDs on pins 3 (green), 4 (white) and 5 (red) |
| `... (Progetto 4).fzz` | Fritzing project of the circuit |
| `... (Vista Breadboard).png` | Breadboard view of the circuit |
| `... (Vista Schema).png` | Schematic view |
| `... (Vista PCB).png` | PCB view |

**How the sketch works:**
- **Button not pressed:** the green LED is on, while the white and red LEDs are off.
- **Button pressed:** the green LED turns off and the white and red LEDs turn on.

### 🛠️ Technologies used

- **Arduino** (Arduino language, based on C/C++)
- **Fritzing** for circuit design (breadboard, schematic and PCB)

### ▶️ How to use

1. Open the `.ino` file with the **Arduino IDE** (the IDE may ask to move it into a folder named after the sketch: accept).
2. Connect the Arduino board via USB and select the board and port under *Tools*.
3. Click **Upload** to compile and upload the sketch.
4. To view or edit the circuit, open the `.fzz` file with **Fritzing**, or simply look at the `.png` images.

### 📋 Requirements

- An Arduino board (the circuit uses an Arduino UNO) and the Arduino IDE
- Components for Project 4: 1 push button, 3 LEDs (green, white, red), 4 resistors of 1 kΩ (one per LED and one for the button), a breadboard and jumper wires (see the circuit images for the wiring)
- Fritzing (optional, only to open the `.fzz` file)

### 👤 Author

Made by [MatteoMgr2008](https://github.com/MatteoMgr2008).
