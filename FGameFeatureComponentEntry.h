// ScriptStruct /Script/GameFeatures.GameFeatureComponentEntry
// Size: 0x58
struct FGameFeatureComponentEntry
{
	struct TWeakObjectPtr<class UClass> ActorClass; // 0x0 (0x28)
	struct TWeakObjectPtr<class UClass> ComponentClass; // 0x28 (0x28)
	unsigned char bClientComponent; // 0x50 (0x1)
	unsigned char bServerComponent; // 0x50 (0x1)
	unsigned char padding_51[0x7]; // 0x51 (0x7)
};

