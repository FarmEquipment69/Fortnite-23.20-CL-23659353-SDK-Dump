// ScriptStruct /Script/SOMRuntime.ScriptedObjectMovement_DynamicPathContext
// Size: 0x38
struct FScriptedObjectMovement_DynamicPathContext
{
	class UFortScriptedObjectMovement_Slot* SourceSlot; // 0x0 (0x8)
	class UFortScriptedObjectMovement_Slot* DestinationSlot; // 0x8 (0x8)
	struct TScriptInterface<class IFortScriptedObjectMovement_GridProviderInterface> GridProvider; // 0x10 (0x10)
	unsigned char padding_20[0x18]; // 0x20 (0x18)
};

