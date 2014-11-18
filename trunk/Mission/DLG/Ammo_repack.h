class Ammo_repack
{
    idd = 16000;
    movingEnable = 1;
    enableSimulation=1;
    name = "Ammo_repack";
class Controls
    {
        class AVB_RscFrame_reload : AVB_RscFrame 
            {
                    idc = 16000;
                    text = "";
                    //size= 32 * GUI_GRID_W;
                    x = -10 * GUI_GRID_W + GUI_GRID_X;
                    y = 0 * GUI_GRID_H + GUI_GRID_Y;
                    w = 42 * GUI_GRID_W;
                    h = 20 * GUI_GRID_H;
                    colorBackground[] = Color_Black ;
            };

        class AVB_close :AVB_RscButton
            {
                    idc = 16001;
                    text = "Х";
                    //size= 32 * GUI_GRID_W;
                    x = 32 * GUI_GRID_W + GUI_GRID_X;
                    y = -1 * GUI_GRID_H + GUI_GRID_Y;
                    w = 1 * GUI_GRID_W;
                    h = 1 * GUI_GRID_H;
                    action = "closeDialog 0";
            };
             
        class AVB_TREE_Ammo_source : AVB_RscTree
            {
                    idc = 16003;
                    x = -10 * GUI_GRID_W + GUI_GRID_X;
                    y = 0 * GUI_GRID_H + GUI_GRID_Y;
                    w = 15 * GUI_GRID_W;
                    h = 20 * GUI_GRID_H;
                        //onTreeSelChanged = "systemChat str ['onTreeExpanded',_this];_this execvm 'Fn\SM_select.sqf'; false";
                        //onTreeExpanded = "systemChat str ['onTreeExpanded',_this]; false";
                        //onTreeCollapsed = "systemChat str ['onTreeCollapsed',_this]; false";
            };  
        class AVB_TREE_Ammo_target : AVB_RscTree
            {
                    idc = 16004;
                    x = 25 * GUI_GRID_W + GUI_GRID_X;
                    y = 0 * GUI_GRID_H + GUI_GRID_Y;
                    w = 8 * GUI_GRID_W;
                    h = 20 * GUI_GRID_H;
                    access = 1;
                       
            };  
            class AVB_info : AVB_RscStructuredText  
            {
                    idc = 16005;
                    text = "Информация";
                    x = 5 * GUI_GRID_W + GUI_GRID_X;
                    y = 0 * GUI_GRID_H + GUI_GRID_Y;
                    w = 20 * GUI_GRID_W;
                    h = 20 * GUI_GRID_H;
                    access = 1;
                       
            };   
            class Title : AVB_RscStructuredText  
            {
                    idc = 16005;
                    text = "Снаряжение магазинов";
                    x = -10 * GUI_GRID_W + GUI_GRID_X;
                    y = -1 * GUI_GRID_H + GUI_GRID_Y;
                    w = 42 * GUI_GRID_W;
                    h = 1 * GUI_GRID_H;
                    access = 1;
                       
            };   
            class AVB_repack :AVB_RscButton
            {
                    idc = 16001;
                    text = "Переснарядить";
                    //size= 32 * GUI_GRID_W;
                    x = 10 * GUI_GRID_W + GUI_GRID_X;
                    y = 10 * GUI_GRID_H + GUI_GRID_Y;
                    w = 10 * GUI_GRID_W;
                    h = 10 * GUI_GRID_H;
                    action = "closeDialog 0;_this execvm 'Fn\Ammo_repack.sqf';";
            };      
                            
    };
};



