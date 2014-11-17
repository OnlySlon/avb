class IM
{
    idd = 17000;
    movingEnable = 1;
    enableSimulation=1;
    name = "IM";
class Controls
    {
        class Title : AVB_RscStructuredText  
            {
                    idc = 17005;
                    text = "Интерактивное меню";
                    x = 10 * GUI_GRID_W + GUI_GRID_X;
                    y = -1 * GUI_GRID_H + GUI_GRID_Y;
                    w = 14 * GUI_GRID_W;
                    h = 1 * GUI_GRID_H;
                    access = 1;
                       
            };      
        class AVB_RscFrame_IM : AVB_RscFrame 
            {
                    idc = 17000;
                    text = "";
                    //size= 32 * GUI_GRID_W;
                    x = 10 * GUI_GRID_W + GUI_GRID_X;
                    y = 0 * GUI_GRID_H + GUI_GRID_Y;
                    w = 15 * GUI_GRID_W;
                    h = 20 * GUI_GRID_H;
                    colorBackground[] = Color_Black ;
            };

        class AVB_close :AVB_RscButton
            {
                    idc = 17001;
                    text = "Х";
                    //size= 32 * GUI_GRID_W;
                    x = 24 * GUI_GRID_W + GUI_GRID_X;
                    y = -1 * GUI_GRID_H + GUI_GRID_Y;
                    w = 1 * GUI_GRID_W;
                    h = 1 * GUI_GRID_H;
                    action = "closeDialog 0";
            };
        class AVB_TREE_IM : AVB_RscTree
            {
                    idc = 17003;
                    x = 10 * GUI_GRID_W + GUI_GRID_X;
                    y = 0 * GUI_GRID_H + GUI_GRID_Y;
                    w = 15 * GUI_GRID_W;
                    h = 20 * GUI_GRID_H;
                        onTreeSelChanged = "_this execvm 'Fn\IM_select.sqf'; false";
                        //onTreeExpanded = "systemChat str ['onTreeExpanded',_this]; false";
                        //onTreeCollapsed = "systemChat str ['onTreeCollapsed',_this]; false";
            };  
          
                            
    };
};


