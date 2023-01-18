// Class /Script/DataRegistry.DataRegistrySource_DataTable
// Size: 0xa0
class UDataRegistrySource_DataTable : public UDataRegistrySource
{
	struct TWeakObjectPtr<class UDataTable> SourceTable; // 0x38 (0x28)
	struct FDataRegistrySource_DataTableRules* TableRules; // 0x60 (0x8)
	class UDataTable* CachedTable; // 0x68 (0x8)
	class UDataTable* PreloadTable; // 0x70 (0x8)
	unsigned char padding_78[0x28]; // 0x78 (0x28)
};

