// Class /Script/FortniteUI.FortVariantTileButton
// Size: 0x14b0
class UFortVariantTileButton : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x10]; // 0x1430 (0x10) 
	struct FLinearColor LockedTintColor; // 0x1440 (0x10)
	struct FName IconParamName; // 0x1450 (0x4)
	unsigned char unreflected_1454[0x4]; // 0x1454 (0x4) 
	struct TWeakObjectPtr<class UMaterialInstance> VariantMateral; // 0x1458 (0x28)
	class UImage* ImageVariantDisplay; // 0x1480 (0x8)
	class UImage* ImageLocked; // 0x1488 (0x8)
	class UOverlay* OverlayConflict; // 0x1490 (0x8)
	class UImage* ImageActive; // 0x1498 (0x8)
	class UVariantObject* AssociatedVariant; // 0x14a0 (0x8)
	class UFortApplyVarianceToInterfaceMaterialFlow* MaterialVarianceFlowUI; // 0x14a8 (0x8)
};

