// WidgetBlueprintGeneratedClass /Game/UI/Foundation/ContentGate/Widgets/WBP_ContentGate_LockIcon.WBP_ContentGate_LockIcon_C
// Size: 0x2b8
class UWBP_ContentGate_LockIcon_C : public UUserWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x268 (0x8)
	class UImage* LockIcon; // 0x270 (0x8)
	class UImage* SkewImage; // 0x278 (0x8)
	bool IsBackgroundVisible; // 0x280 (0x1)
	unsigned char unreflected_281[0x3]; // 0x281 (0x3) 
	struct FLinearColor BackgroundColor; // 0x284 (0x10)
	bool IsSkewVisible; // 0x294 (0x1)
	unsigned char unreflected_295[0x3]; // 0x295 (0x3) 
	struct FVector2D IconSize; // 0x298 (0x10)
	struct FVector2D SkewSize; // 0x2a8 (0x10)

	/* Functions */

	// Function /Game/UI/Foundation/ContentGate/Widgets/WBP_ContentGate_LockIcon.WBP_ContentGate_LockIcon_C.SetSize (Has no native function)
	void SetSize(struct FVector2D& IconSize, struct FVector2D& SkewSize, struct FSlateBrush& K2NodeMakeStructSlateBrush, struct FSlateBrush& K2NodeMakeStructSlateBrush1); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/ContentGate/Widgets/WBP_ContentGate_LockIcon.WBP_ContentGate_LockIcon_C.SetLockedBackground (Has no native function)
	void SetLockedBackground(bool& isBackgroundVisible, struct FLinearColor& BackgroundColor, bool& isSkewVisible, bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, bool& TempboolVariable1, enum ESlateVisibility& K2NodeSelectDefault, double& TemprealVariable, double& TemprealVariable1, double& K2NodeSelectDefault1, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue, float& CallFuncSetScalarParameterValueValueImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/ContentGate/Widgets/WBP_ContentGate_LockIcon.WBP_ContentGate_LockIcon_C.SetLockedStatus (Has no native function)
	void SetLockedStatus(bool& IsLocked, bool& TempboolVariable, double& TemprealVariable, double& TemprealVariable1, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue, double& K2NodeSelectDefault, float& CallFuncSetScalarParameterValueValueImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/ContentGate/Widgets/WBP_ContentGate_LockIcon.WBP_ContentGate_LockIcon_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/ContentGate/Widgets/WBP_ContentGate_LockIcon.WBP_ContentGate_LockIcon_C.ExecuteUbergraph_WBP_ContentGate_LockIcon (Has no native function)
	void ExecuteUbergraphWBPContentGateLockIcon(int& EntryPoint, bool& K2NodeEventIsDesignTime); // (Final | 0x00008000)
};

