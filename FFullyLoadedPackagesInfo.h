// ScriptStruct /Script/Engine.FullyLoadedPackagesInfo
// Size: 0x38
struct FFullyLoadedPackagesInfo
{
	struct TEnumAsByte<EFullyLoadPackageType> FullyLoadType; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FString tag; // 0x8 (0x10)
	struct TArray<struct FName> PackagesToLoad; // 0x18 (0x10)
	struct TArray<class UObject*> LoadedObjects; // 0x28 (0x10)
};

