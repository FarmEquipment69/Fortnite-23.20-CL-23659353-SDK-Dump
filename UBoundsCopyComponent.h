// Class /Script/Engine.BoundsCopyComponent
// Size: 0x140
class UBoundsCopyComponent : public UActorComponent
{
	struct TWeakObjectPtr<class AActor> BoundsSourceActor; // 0xa0 (0x28)
	bool bUseCollidingComponentsForSourceBounds; // 0xc8 (0x1)
	bool bKeepOwnBoundsScale; // 0xc9 (0x1)
	bool bUseCollidingComponentsForOwnBounds; // 0xca (0x1)
	unsigned char unreflected_cb[0x5]; // 0xcb (0x5) 
	struct FTransform PostTransform; // 0xd0 (0x60)
	bool bCopyXBounds; // 0x130 (0x1)
	bool bCopyYBounds; // 0x131 (0x1)
	bool bCopyZBounds; // 0x132 (0x1)
	unsigned char padding_133[0xd]; // 0x133 (0xd)
};

