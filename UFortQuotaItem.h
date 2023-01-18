// Class /Script/FortniteGame.FortQuotaItem
// Size: 0x138
class UFortQuotaItem : public UFortAccountItem
{
	float currentvalue; // 0x108 (0x4)
	unsigned char unreflected_10c[0x4]; // 0x10c (0x4) 
	struct FString lastmodtime; // 0x110 (0x10)
	int unitsperminuterecharge; // 0x120 (0x4)
	int maxquota; // 0x124 (0x4)
	int rechargedelayminutes; // 0x128 (0x4)
	unsigned char padding_12c[0xc]; // 0x12c (0xc)

	/* Functions */

	// Function /Script/FortniteGame.FortQuotaItem.GetCurrentQuotaAmount (Underlying native function: GetCurrentQuotaAmount 0x8efbb24)
	int GetCurrentQuotaAmount(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

