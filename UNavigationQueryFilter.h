// Class /Script/NavigationSystem.NavigationQueryFilter
// Size: 0x48
class UNavigationQueryFilter : public UObject
{
	struct TArray<struct FNavigationFilterArea> Areas; // 0x28 (0x10)
	struct FNavigationFilterFlags IncludeFlags; // 0x38 (0x4)
	struct FNavigationFilterFlags ExcludeFlags; // 0x3c (0x4)
	unsigned char padding_40[0x8]; // 0x40 (0x8)
};

