iOS Development Course Beginner - 26. Controls
======

Ученик. 

1. Расположите тестируюмую вьюху на верхней половине экрана
2. На нижней половине создайте 3 свича: Rotation, Scale, Translation. По умолчанию все 3 выключены
3. Также создайте сладер скорость, со значениями от 0.5 до 2, стартовое значение 1
4. Создайте соответствующие проперти для свитчей и слайдера, а также методы для события valueChanged

Студент.

5. Добавьте сегментед контрол с тремя разными сегментами
6. Они должны соответствовать трем разным картинкам, которые вы должны добавить
7. Когда переключаю сегменты, то картинка должна меняться на соответствующую

Мастер.

8. Как только мы включаем один из свичей, наша вьюха должна начать соответствующую анимацию
(либо поворот, либо скеил, либо перенос). Используйте свойство transform из урока об анимациях
9. Так же следует помнить, что если вы переключили свич, но какойто другой включен одновременно с ним, то вы должны делать уже двойную анимацию. Например и увеличение и поворот одновременно (из урока про анимации)
10. Анимации должны быть бесконечно повторяющимися, единственное что их может остановить, так это когда все три свича выключены

Супермен.

11. Добавляем использование слайдера. Слайдер регулирует скорость. То есть когда значение на 0.5, то скорость анимаций должна быть в два раза медленнее, а если на 2, то в два раза быстрее обычной.
12. Попробуйте сделать так, чтобы когда двигался слайдер, то анимация обновлялась без прерывания, а скорость изменялась в соответствующую сторону.
