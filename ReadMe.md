# Modélisation objet

## notions fondamentales

```plantuml
@startuml

class Voiture 
{
    - couleur : string
    - marque : string
    - annee : int
    - moteur : string
    + void demarrer() : void
}
hide empty members
@enduml
```

## dépendances entre objets

**composition**

```plantuml
@startuml
Voiture *--> Roue
hide empty members
@enduml
```

**Agrégation**

```plantuml
@startuml

class Voiture
class Passager

Voiture o--> Passager : agrège
hide empty members

@enduml
```

## dépendance simple

```plantuml
@startuml

class Voiture
class Passager

Voiture ..> Passager
hide empty members

@enduml
```

## héritage : extension

```plantuml
@startuml

class Mercedes extends Voiture
hide empty members
@enduml
```
## héritage : réalisation

```plantuml
@startuml

interface Drivable
class Voiture implements Drivable
hide empty members
@enduml
```

## Diagramme de classe

```plantuml
@startuml

abstract Voiture implements Drivable
class Mercedes extends Voiture
Voiture *--> Roue
Voiture ..> Passager
Voiture o--> Passager
Garage o--> Drivable
Garage ..> Drivable
hide empty members
@enduml
```