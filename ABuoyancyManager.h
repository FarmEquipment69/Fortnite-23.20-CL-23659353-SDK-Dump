// Class /Script/Water.BuoyancyManager
// Size: 0x350
class ABuoyancyManager : public AActor
{
	unsigned char unreflected_288[0x50]; // 0x288 (0x50) 
	struct TArray<class UBuoyancyComponent*> BuoyancyComponents; // 0x2d8 (0x10)
	unsigned char padding_2e8[0x68]; // 0x2e8 (0x68)

	/* Functions */

	// Function /Script/Water.BuoyancyManager.GetBuoyancyComponentManager (Underlying native function: GetBuoyancyComponentManager 0x711fe44)
	static bool GetBuoyancyComponentManager(class UObject*& WorldContextObject, class ABuoyancyManager*& Manager); // (Final | Native | Static | Public | HasOutParms)
};

