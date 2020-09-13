

## 1. Create view, scene, rect


## 2. Key Event
- Focus
```
  player->setFlag(QGraphicsItem::ItemIsFocusable);
  player->setFocus();
```

- Event handler
```
  void Player::keyPressEvent(QKeyEvent *event)
```

## 3. Shoot
- create bullet and add it into scene
- use single+slot to handle timer event for moving

## 4. Clean up
- set view fixed size
- delete bullet out of screen

## 5. Enemy and collide checking
- random pos

- spawn using timer

- collide checking in bullet
```
  collidingItems();
```
- type checking
``` 
  if(typdid(*(colliding_items[i]) == typeid(Enemy)))
```

## 6. Game class, Player class, player health and score
- QGraphicsTextItem 
- draw the text, font, color

## 7. Sound
- Modify .pro file, add qt lib multimedia and RESOURCES
- resource file
- load sound from resouce file
- play, check media state


## 8. Graphics resource
- add images into resource file
- change object from QGraphicsRectItem to QGraphicsPixmapItem
```
  setPixmap(QPixmap(":/images/bullet.png"));
```
- Rotation
```
  setTransformOriginPoint(50, 50);
  setRotation(180);
```
- Set background
```
 scene->setBackgroundBrush(QBrush(QImage(":/images/bg.png")));
```