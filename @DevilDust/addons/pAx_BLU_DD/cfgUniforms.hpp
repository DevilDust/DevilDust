        class UniformItem : InventoryItem_Base_F
          {
             type = 801;
          };
     class Uniform_Base: ItemCore
       {

       };
   class pAx_U_man_DEA_DD: Uniform_Base
       {
        scope = 2;
        displayName = "Green Shirt";
       // picture = "-";
        model = "\A3\Structures_F\Items\Luggage\Suitcase_F.p3d";
        class ItemInfo : UniformItem {
            uniformClass = "pAx_blu_1_DD";
            containerClass = "Supply20";
            mass = 50;
        };
        };