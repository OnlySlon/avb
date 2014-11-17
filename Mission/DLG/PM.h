class PM
{
    idd = 16000;
    movingEnable = 1;
    enableSimulation=1;
    name = "PM";
class Controls
    {
        class Title : AVB_RscStructuredText  
            {
                    idc = 16005;
                    text = "Меню игрока";
                    x = -10 * GUI_GRID_W + GUI_GRID_X;
                    y = -1 * GUI_GRID_H + GUI_GRID_Y;
                    w = 14 * GUI_GRID_W;
                    h = 1 * GUI_GRID_H;
                    access = 1;
                       
            };      
        class AVB_RscFrame_PM : AVB_RscFrame 
            {
                    idc = 16000;
                    text = "";
                    //size= 32 * GUI_GRID_W;
                    x = -10 * GUI_GRID_W + GUI_GRID_X;
                    y = 0 * GUI_GRID_H + GUI_GRID_Y;
                    w = 15 * GUI_GRID_W;
                    h = 20 * GUI_GRID_H;
                    colorBackground[] = Color_Black ;
            };

        class AVB_close :AVB_RscButton
            {
                    idc = 16001;
                    text = "Х";
                    //size= 32 * GUI_GRID_W;
                    x = 4 * GUI_GRID_W + GUI_GRID_X;
                    y = -1 * GUI_GRID_H + GUI_GRID_Y;
                    w = 1 * GUI_GRID_W;
                    h = 1 * GUI_GRID_H;
                    action = "closeDialog 0";
            };
        class AVB_TREE_PM : AVB_RscTree
            {
                    idc = 16003;
                    x = -10 * GUI_GRID_W + GUI_GRID_X;
                    y = 0 * GUI_GRID_H + GUI_GRID_Y;
                    w = 15 * GUI_GRID_W;
                    h = 20 * GUI_GRID_H;
                        onTreeSelChanged = "_this execvm 'Fn\PM_select.sqf'; false";
                        //onTreeExpanded = "systemChat str ['onTreeExpanded',_this]; false";
                        //onTreeCollapsed = "systemChat str ['onTreeCollapsed',_this]; false";
            };  
          
                            
    };
};


