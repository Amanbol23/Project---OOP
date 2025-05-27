# FitnessApp

## Popis
FitnessApp je konzolová aplikace v C++ pro sledování tréninků, cvičení a fitness cílů uživatele.

## Struktura tříd

### User
Reprezentuje uživatele, uchovává jeho tréninky a cíle.

**Metody:**
- `addWorkout(IWorkout workout)`  
  Přidá trénink uživateli.
- `addGoal(IFitnessGoal goal)`  
  Přidá fitness cíl uživateli.

---

### Workout (implementuje IWorkout)
Popisuje jeden trénink, obsahuje seznam cvičení.

**Metody:**
- `addExercise(IExercise exercise)`  
  Přidá cvičení do tréninku.
- `getExercises()`  
  Vrací seznam cvičení v tréninku.
- `static int getWorkoutCount()`  
  Vrací celkový počet vytvořených tréninků (statická metoda).

---

### IWorkout (rozhraní)
Definuje rozhraní pro tréninky.

**Metody:**
- `addExercise(IExercise exercise)`  
  Přidá cvičení do tréninku.

---

### IExercise (rozhraní)
Definuje rozhraní pro cvičení.

**Metody:**
- `getName()`  
  Vrací název cvičení.
- `getCaloriesBurned()`  
  Vrací počet spálených kalorií.

---

### CardioExercise (implementuje IExercise)
Kardio cvičení.

**Metody:**
- `CardioExercise(int duration)`  
  Konstruktor, přijímá délku trvání v minutách.
- `getName()`  
  Vrací název cvičení ("Cardio").
- `getCaloriesBurned()`  
  Vypočítá kalorie na základě délky trvání.

---

### StrengthExercise (implementuje IExercise)
Silové cvičení.

**Metody:**
- `StrengthExercise(int weight)`  
  Konstruktor, přijímá váhu v kilogramech.
- `getName()`  
  Vrací název cvičení ("Strength").
- `getCaloriesBurned()`  
  Vypočítá kalorie na základě váhy.

---

### IFitnessGoal (rozhraní)
Rozhraní pro fitness cíle.

**Metody:**
- `calculateProgress()`  
  Vrací pokrok v dosažení cíle (hodnota od 0 do 1).

---

### WeightLossGoal (implementuje IFitnessGoal)
Cíl na snížení váhy.

**Metody:**
- `WeightLossGoal(double current, double target)`  
  Konstruktor, přijímá aktuální a cílovou váhu.
- `calculateProgress()`  
  Vrací pokrok v hubnutí.
- `isAchieved()`  
  Vrací true, pokud je cíl dosažen.

---

### ActivityLogger
Statická třída pro logování aktivity.

**Metody:**
- `logWorkout(IWorkout workout)`  
  Zapíše informace o tréninku do logu.

---

## Příklad použití
```cpp

User* user = new User();
IWorkout* workout = new Workout();

workout->addExercise(new CardioExercise(30));
user->addWorkout(workout);

IFitnessGoal* goal = new WeightLossGoal(85.0, 75.0);
user->addGoal(goal);

ActivityLogger::logWorkout(workout);