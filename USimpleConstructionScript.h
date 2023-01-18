// Class /Script/Engine.SimpleConstructionScript
// Size: 0xa0
class USimpleConstructionScript : public UObject
{
	struct TArray<class USCS_Node*> RootNodes; // 0x28 (0x10)
	struct TArray<class USCS_Node*> AllNodes; // 0x38 (0x10)
	class USCS_Node* DefaultSceneRootNode; // 0x48 (0x8)
	unsigned char padding_50[0x50]; // 0x50 (0x50)
};

