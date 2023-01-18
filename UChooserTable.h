// Class /Script/Chooser.ChooserTable
// Size: 0x50
class UChooserTable : public UObject
{
	struct FName ResultType; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct TArray<struct TScriptInterface<class IChooserColumn>> Columns; // 0x30 (0x10)
	struct TArray<struct TScriptInterface<class IDataInterface>> Results; // 0x40 (0x10)
};

