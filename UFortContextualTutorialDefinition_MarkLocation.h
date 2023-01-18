// Class /Script/FortniteGame.FortContextualTutorialDefinition_MarkLocation
// Size: 0x120
class UFortContextualTutorialDefinition_MarkLocation : public UFortContextualTutorialDefinition
{
	enum EFortWorldMarkerType MarkerType; // 0x100 (0x1)
	unsigned char unreflected_101[0x7]; // 0x101 (0x7) 
	struct FVector2D MobilePosition; // 0x108 (0x10)
	struct TEnumAsByte<EHorizontalAlignment> MobileHorizontalAlignment; // 0x118 (0x1)
	struct TEnumAsByte<EVerticalAlignment> MobileVerticalAlignment; // 0x119 (0x1)
	unsigned char padding_11a[0x6]; // 0x11a (0x6)
};

