class Alt_reload
{
	idd = 14000;
	movingEnable = 1;
	enableSimulation=1;
	name = "Alt_reload";
class Controls
    {
    	class Title : AVB_RscStructuredText  
            {
                    idc = -1;
                    text = "Перезарядка";
                    x = 5 * GUI_GRID_W + GUI_GRID_X;
                    y = 9 * GUI_GRID_H + GUI_GRID_Y;
                    w = 26 * GUI_GRID_W;
                    h = 1 * GUI_GRID_H;
                    access = 1;
                       
            }; 
    	class AVB_RscFrame_reload : AVB_RscFrame 
				{
					idc = 14000;
					text = "";
					//size= 32 * GUI_GRID_W;
					x = 5 * GUI_GRID_W + GUI_GRID_X;
					y = 10 * GUI_GRID_H + GUI_GRID_Y;
					w = 27 * GUI_GRID_W;
					h = 10 * GUI_GRID_H;
				};

				class AVB_close_reload :AVB_RscButton
				{
					idc = 14001;
					text = "X";
					//size= 32 * GUI_GRID_W;
					x = 31 * GUI_GRID_W + GUI_GRID_X;
					y = 9 * GUI_GRID_H + GUI_GRID_Y;
					w = 1 * GUI_GRID_W;
					h = 1 * GUI_GRID_H;
					action = "closeDialog 0";
				};
				class AVB_list_reload : AVB_list
				{
					idc = 14002;
					x = 5 * GUI_GRID_W + GUI_GRID_X;
					y = 10 * GUI_GRID_H + GUI_GRID_Y;
					w = 27 * GUI_GRID_W;
					h = 10 * GUI_GRID_H;
					colorText[] = Color_White;
					colorBackground[] = Color_Black ;
					//onLBSelChanged= "hint ""ch"";";
					onLBDblClick = "_this  execvm 'Fn\Alt_reload_selected.sqf';";
				};
							
    };
};


