// Class /Script/NavigationSystem.NavLinkCustomComponent
// Size: 0x1d0
class UNavLinkCustomComponent : public UNavRelevantComponent
{
	unsigned char unreflected_f0[0x8]; // 0xf0 (0x8) 
	uint32_t NavLinkUserId; // 0xf8 (0x4)
	unsigned char unreflected_fc[0x4]; // 0xfc (0x4) 
	class UClass* EnabledAreaClass; // 0x100 (0x8)
	class UClass* DisabledAreaClass; // 0x108 (0x8)
	struct FNavAgentSelector SupportedAgents; // 0x110 (0x4)
	unsigned char unreflected_114[0x4]; // 0x114 (0x4) 
	struct FVector LinkRelativeStart; // 0x118 (0x18)
	struct FVector LinkRelativeEnd; // 0x130 (0x18)
	struct TEnumAsByte<ENavLinkDirection> LinkDirection; // 0x148 (0x1)
	unsigned char unreflected_149[0x3]; // 0x149 (0x3) 
	unsigned char bLinkEnabled; // 0x14c (0x1)
	unsigned char bNotifyWhenEnabled; // 0x14c (0x1)
	unsigned char bNotifyWhenDisabled; // 0x14c (0x1)
	unsigned char bCreateBoxObstacle; // 0x14c (0x1)
	unsigned char unreflected_14d[0x3]; // 0x14d (0x3) 
	struct FVector ObstacleOffset; // 0x150 (0x18)
	struct FVector ObstacleExtent; // 0x168 (0x18)
	class UClass* ObstacleAreaClass; // 0x180 (0x8)
	float BroadcastRadius; // 0x188 (0x4)
	float BroadcastInterval; // 0x18c (0x4)
	struct TEnumAsByte<ECollisionChannel> BroadcastChannel; // 0x190 (0x1)
	unsigned char padding_191[0x3f]; // 0x191 (0x3f)
};

