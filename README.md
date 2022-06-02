# proyectoIOT

*Estudiantes: Diana Quintero, Juan Sebastián Rodriguez, Oscar Rodriguez*

##  Resumen
La escasez de agua que se ha producido en los últimos años y la necesidad de esta para la cultivación y productividad de los alimentos seguirán en aumento con el transcurso de los años y el aumento de la
población a nivel mundial. La agricultura como se conocía se empieza a ver impactada por la llegada de nuevas tecnologías y los factores medioambientales externos causados por la humanidad. Ante este problema, las innovaciones tecnológicas se vuelven necesarias, lo que permite la optimización de los recursos invertidos en la cultura para hacerlos más productivos y beneficiosos. Una de las alternativas creativas para la industria agrícola es la implementación de Internet de las cosas (IOT).
En este proyecto se realizará un sistema de riego autónomo utilizando Internet de las Cosas (IoT). Se ocupan componentes de bajo costo y hardware - software libre (Script, HTML, Php, SQL, etc.) para implementar sensores de humedad, temperatura y pH, que posibilita la obtención de información de las variables agroclimáticas a medir (Humedad del suelo, temperatura del ambiente y pH). Se implementará el uso de una página web para mostrar los datos obtenidos diariamente mediante gráficos para pronosticar en qué momento se debe realizar ajustes del pH y humedad del suelo, utilizando una base de datos en la nube. El formato de servicios de SQL y HTML se han utilizado para resolver la interacción entre los diferentes subsistemas (riego de cultivos, predicciones, alertas y cliente), software (PHP, HTML, Script). Para tener un uso racional del agua eficientemente. Con el propósito de desarrollar esta propuesta se realizó el uso de sensores de temperatura, pH y humedad, pcb con el embebido lora mdot, utilizando el microcontrolador SMT32, se empleó una conexión WIFI para que la página pueda interactuar con los sensores, utilizando el protocolo MQTT. Por medio de estarecolección de información se darán los datos generados mediante gráficos entendibles para el usuario y que recomendaciones seguir.
Palabras Clave: Internet de la Cosas (lOT), Agricultura, pH, Humedad del suelo, temperatura, SQL, SMT32, Lora


## AFIOT-Solución
Con las problemáticas que se presentan en la agricultura y los sistemas de riegos actuales nació AFIOT un sistemas de riego automático con tecnologáa en internet las cosas, con el cual se diseñara un prototipo
de dispositivo IoT con funcionamiento en cultivos, se implementara una comunicación Lora-mdot para la comunicación wifi ya que los terrenos son muy extensos y se necesita un sistema de largo alcance para el funcionamiento.

### Materiales: -Pcb con embebido Lora-mdot -Sensores ( humedad, pH, temperatura) -microcontolador STM32 (lo posee el mdot) -cables.

El sistema de riego contara con 3 sensores para la medición de datos, en el primer caso se toma la temperatura del ambiente para tener un control y monitoreo y no halla problemas hacia el cultivo por altas o bajas temperaturas, se medirá también el pH de la tierra, para saber que acidez tiene la tierra y de acuerdo a eso saber si esta es da˜nina para el cultivo y tomar medidas de precaución y nivelación del pH, para esto se enviara una alerta al usuario por medio de una web que se observa desde el celular, por ultimo todo cultivo tiene un rango de medida en humedad para que este no muera por ahogamiento o escasez de agua, aunque aun no se sabe el rango se harán mediciones para tener
un promedio de humedad, y una vez tomada la humedad por medio del sensor el sistema activara el riego, ya sea por aspersión, micro aspersión o nevulización, y así llevar un control en el consumo del
agua.

Estadisticas app: https://thingspeak.com/channels/1755971
