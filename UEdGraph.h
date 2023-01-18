// Class /Script/Engine.EdGraph
// Size: 0x60
class UEdGraph : public UObject
{
	class UClass* Schema; // 0x28 (0x8)
	struct TArray<class UEdGraphNode*> Nodes; // 0x30 (0x10)
	unsigned char bEditable; // 0x40 (0x1)
	unsigned char bAllowDeletion; // 0x40 (0x1)
	unsigned char bAllowRenaming; // 0x40 (0x1)
	unsigned char padding_41[0x1f]; // 0x41 (0x1f)
};

