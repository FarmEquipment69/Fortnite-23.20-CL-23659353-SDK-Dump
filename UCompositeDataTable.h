// Class /Script/Engine.CompositeDataTable
// Size: 0xd8
class UCompositeDataTable : public UDataTable
{
	struct TArray<class UDataTable*> ParentTables; // 0xb0 (0x10)
	struct TArray<class UDataTable*> OldParentTables; // 0xc0 (0x10)
	unsigned char padding_d0[0x8]; // 0xd0 (0x8)
};

