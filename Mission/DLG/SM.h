class SM
{
    idd = 15000;
    movingEnable = 1;
    enableSimulation=1;
    name = "SM";
class Controls
    {
        class AVB_RscFrame_reload : AVB_RscFrame 
            {
                    idc = 15000;
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
                    idc = 15001;
                    text = "Х";
                    //size= 32 * GUI_GRID_W;
                    x = 32 * GUI_GRID_W + GUI_GRID_X;
                    y = -1 * GUI_GRID_H + GUI_GRID_Y;
                    w = 1 * GUI_GRID_W;
                    h = 1 * GUI_GRID_H;
                    action = "closeDialog 0";
            };
        class AVB_TREE_SM : AVB_RscTree
            {
                    idc = 15003;
                    x = -10 * GUI_GRID_W + GUI_GRID_X;
                    y = 0 * GUI_GRID_H + GUI_GRID_Y;
                    w = 10 * GUI_GRID_W;
                    h = 20 * GUI_GRID_H;
                        onTreeSelChanged = "systemChat str ['onTreeExpanded',_this];_this execvm 'Fn\SM_select.sqf'; false";
                        //onTreeExpanded = "systemChat str ['onTreeExpanded',_this]; false";
                        //onTreeCollapsed = "systemChat str ['onTreeCollapsed',_this]; false";
            };  
        class AVB_TREE_notsquad : AVB_RscTree
            {
                    idc = 15004;
                    x = 25 * GUI_GRID_W + GUI_GRID_X;
                    y = 0 * GUI_GRID_H + GUI_GRID_Y;
                    w = 8 * GUI_GRID_W;
                    h = 20 * GUI_GRID_H;
                    access = 1;
                       
            };  
            class AVB_info : AVB_RscStructuredText  
            {
                    idc = 15005;
                    text = "Информация";
                    x = 0 * GUI_GRID_W + GUI_GRID_X;
                    y = 0 * GUI_GRID_H + GUI_GRID_Y;
                    w = 25 * GUI_GRID_W;
                    h = 20 * GUI_GRID_H;
                    access = 1;
                       
            };   
            class Title : AVB_RscStructuredText  
            {
                    idc = 15005;
                    text = "Управление отрядом";
                    x = -10 * GUI_GRID_W + GUI_GRID_X;
                    y = -1 * GUI_GRID_H + GUI_GRID_Y;
                    w = 42 * GUI_GRID_W;
                    h = 1 * GUI_GRID_H;
                    access = 1;
                       
            };         
                            
    };
};


