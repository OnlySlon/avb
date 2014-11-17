class Params 
{
	class Hour { 
		title="Время"; 
		values[]={ -1,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24}; 
		texts[]={ "Случайно","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24"}; 
		default=10; 
	};
	class wounded { 
		title="Время без сознания"; 
		values[]={ 0,60,120,300,600 }; 
		texts[]={ "0","60","120","300","600"}; 
		default=0; 
	};
	class Respawn {
		title="Время возрождения игрока";
		values[]={5,10,30,60};
		texts[]={"5","10сек","30сек","60сек"};
		default=10;
	};
	class remPlayerBodyTime {
		title="Время удаление трупа игрока через";
		values[]={ 30,60,90,120,300 }; 
		texts[]={ "30сек","60сек","90сек","120сек","300сек" }; 
		default=120;
	};
	class counteraatack { 
		title="Время до контратаки"; 
		values[]={ 2,5,10,15 }; 
		texts[]={ "2","5","10","15"}; 
		default=0; 
	};
	class aiSkill {
		title="Уровень сложности"; 
		values[]={ 1,2,3 }; 
		texts[]={ "легкий","средний","реалистичный"}; 
		default=2; 
	};
	class maxAIPerPlayer {
		title="Количество противника"; 
		values[]={ 1,2,3,4 }; 
		texts[]={ "мало","нормально","много","пропорционально" }; 
		default=4; 
	};
	class markersEnabled {
		title="Отображение меток на карте"; 
		values[]={ 1,0 }; 
		texts[]={ "Вкл","Выкл" }; 
		default=1; 
	};
	class useroptions { 	
		title="Возможность регулировки обзора и травы"; 
		values[]={ 1,0 }; 
		texts[]={ "Вкл","Выкл" }; 
		default=1; 
	};
	class RespButton {
		title="Кнопка возрождения"; 
		values[]={ 1,0 }; 
		texts[]={ "Вкл","Выкл" }; 
		default=0;
	};
	class Var_acre { 
		title="ACRE Радио"; 
		values[]={1,0}; 
		texts[]={ "Вкл","Выкл"}; 
		default=1; 
	};
	class IEDs { 
		title="Фугасы на дорогах"; 
		values[]={ 1,0 }; 
		texts[]={ "Вкл","Выкл"}; 
		default=0; 
	};
	class hqProtectionRing { 	
		title="Защита базы"; 
		values[]={ 1,0 }; 
		texts[]={ "вкл","выкл"}; 
		default=1; 
	};
	class ambientCivilians { 
		title="Гражданские"; 
		values[]={ 1,0 }; 
		texts[]={ "Вкл","Выкл"}; 
		default=0; 
	};
	class ambientAnimals{ 	
		title="Животные"; 
		values[]={ 1,0 }; 
		texts[]={ "Вкл","Выкл" }; 
		default=1; 
	};
	class ViweVic{ 	
		title="Принудительный вид от 1го лица в технике: вкл/выкл"; 
		values[]={ 1,0 }; 
		texts[]={ "Вкл","Выкл" }; 
		default=1; 
	};
}; 