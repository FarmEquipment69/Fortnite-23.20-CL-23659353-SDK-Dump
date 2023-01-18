// Class /Script/FortniteGame.FortWidgetComponent
// Size: 0x700
class UFortWidgetComponent : public UWidgetComponent
{
	bool bClampProjectedLocalPositionToViewport; // 0x6b8 (0x1)
	unsigned char unreflected_6b9[0x7]; // 0x6b9 (0x7) 
	struct FVector2D PreClampedLocalPosition; // 0x6c0 (0x10)
	float ClampPaddingTop; // 0x6d0 (0x4)
	float ClampPaddingBottom; // 0x6d4 (0x4)
	float ClampPaddingLeft; // 0x6d8 (0x4)
	float ClampPaddingRight; // 0x6dc (0x4)
	struct FMulticastInlineDelegate OnClampStateChangedEvent; // 0x6e0 (0x10)
	unsigned char padding_6f0[0x10]; // 0x6f0 (0x10)
};

