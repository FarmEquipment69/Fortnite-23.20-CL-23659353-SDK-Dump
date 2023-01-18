// Class /Script/Engine.NavigationSystemConfig
// Size: 0x50
class UNavigationSystemConfig : public UObject
{
	struct FSoftClassPath NavigationSystemClass; // 0x28 (0x18)
	struct FNavAgentSelector SupportedAgentsMask; // 0x40 (0x4)
	struct FName DefaultAgentName; // 0x44 (0x4)
	unsigned char bIsOverriden; // 0x48 (0x1)
	unsigned char padding_49[0x7]; // 0x49 (0x7)
};

