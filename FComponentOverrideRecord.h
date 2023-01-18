// ScriptStruct /Script/Engine.ComponentOverrideRecord
// Size: 0x78
struct FComponentOverrideRecord
{
	unsigned char ComponentClass_0[0x8]; // 0x0 (0x8) (UNHANDLED PROPERTY TYPE: ClassPtrProperty UID: 0)
	class UActorComponent* ComponentTemplate; // 0x8 (0x8)
	struct FComponentKey ComponentKey; // 0x10 (0x20)
	struct FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x30 (0x48)
};

