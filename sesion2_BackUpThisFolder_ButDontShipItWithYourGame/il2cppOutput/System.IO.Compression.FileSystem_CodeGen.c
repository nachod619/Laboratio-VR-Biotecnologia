#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.IO.Compression.ZipArchive System.IO.Compression.ZipFile::OpenRead(System.String)
extern void ZipFile_OpenRead_m82404BAA63D25E027D3D0A472103AA6C20EBCF83 (void);
// 0x00000002 System.IO.Compression.ZipArchive System.IO.Compression.ZipFile::Open(System.String,System.IO.Compression.ZipArchiveMode)
extern void ZipFile_Open_m6273C047FE6C596112D88B4D7666268E897C7A0F (void);
// 0x00000003 System.IO.Compression.ZipArchive System.IO.Compression.ZipFile::Open(System.String,System.IO.Compression.ZipArchiveMode,System.Text.Encoding)
extern void ZipFile_Open_m6F83ACFED32799E052503C5CEAE6DD0D145FCC8D (void);
static Il2CppMethodPointer s_methodPointers[3] = 
{
	ZipFile_OpenRead_m82404BAA63D25E027D3D0A472103AA6C20EBCF83,
	ZipFile_Open_m6273C047FE6C596112D88B4D7666268E897C7A0F,
	ZipFile_Open_m6F83ACFED32799E052503C5CEAE6DD0D145FCC8D,
};
static const int32_t s_InvokerIndices[3] = 
{
	14654,
	12946,
	11781,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_IO_Compression_FileSystem_CodeGenModule;
const Il2CppCodeGenModule g_System_IO_Compression_FileSystem_CodeGenModule = 
{
	"System.IO.Compression.FileSystem.dll",
	3,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
