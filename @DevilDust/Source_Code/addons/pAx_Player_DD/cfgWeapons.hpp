class cfgWeapons
{
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////       Uniforms    ///////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    class InventoryItem_Base_F;
    class ItemCore;
    class pAx_Base_DD;
    class UniformItem : InventoryItem_Base_F
     {
        type = 801;
     };
    class Uniform_Base: ItemCore
    {
        class ItemInfo;
    };

    class pAx_U_man_green_DD: Uniform_Base
    {
        scope = 2;
        displayName = "Green Shirt";
       // picture = "-";
        model = "\A3\Structures_F\Items\Luggage\Suitcase_F.p3d";
        class ItemInfo : UniformItem {
            uniformClass = "pAx_man_green_DD";
            containerClass = "Supply20";
            mass = 50;
        };
    };
      class pAx_U_man_magpul_DD: Uniform_Base
        {
            scope = 2;
            displayName = "MagPul Shirt";
           // picture = "-";
            model = "\A3\Structures_F\Items\Luggage\Suitcase_F.p3d";
            class ItemInfo : UniformItem {
                uniformClass = "pAx_man_magpul_DD";
                containerClass = "Supply20";
                mass = 50;
            };
        };
         class pAx_U_man_boston_DD: Uniform_Base
                {
                    scope = 2;
                    displayName = "Boston Shirt";
                   // picture = "-";
                    model = "\A3\Structures_F\Items\Luggage\Suitcase_F.p3d";
                    class ItemInfo : UniformItem {
                        uniformClass = "pAx_man_boston_DD";
                        containerClass = "Supply20";
                        mass = 50;
                    };
                };

};

