// ScriptStruct /Script/FortniteUI.FortUIFeatureStruct
// Size: 0x18
struct FFortUIFeatureStruct
{
	enum EFortUIFeatureState CurrentState; // 0x0 (0x1)
	enum EFortUIFeatureState ForcedState; // 0x1 (0x1)
	enum EFortUIFeatureStateReason ForcedStateReason; // 0x2 (0x1)
	unsigned char unreflected_3[0x5]; // 0x3 (0x5) 
	struct FMulticastInlineDelegate ChangeDelegate; // 0x8 (0x10)
};

