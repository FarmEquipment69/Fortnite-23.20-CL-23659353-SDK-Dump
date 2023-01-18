// Class /Script/NavigationSystem.NavigationGraphNodeComponent
// Size: 0x2d0
class UNavigationGraphNodeComponent : public USceneComponent
{
	struct FNavGraphNode Node; // 0x2a0 (0x18)
	class UNavigationGraphNodeComponent* NextNodeComponent; // 0x2b8 (0x8)
	class UNavigationGraphNodeComponent* PrevNodeComponent; // 0x2c0 (0x8)
	unsigned char padding_2c8[0x8]; // 0x2c8 (0x8)
};

