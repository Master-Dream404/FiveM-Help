/*
"FiveM_b2545_GTAProcess.exe"+01D00DB8 = pointer base for CPed / players https://cdn.discordapp.com/attachments/1089517193571614730/1154937469561745448/image.png

"FiveM_b2545_GTAProcess.exe"+01D00DB8 is the pointer for the CPed class so you can set ammo and so on but only for FiveM_b2545_GTAProcess process i will upload all pointer for any version

"FiveM_b2545_GTAProcess.exe"+01D00DB8 to use 
*/



//ex to give health
void MasterCream(float value)
{
  auto CPed = GetModuleHandleA("FiveM_b2545_GTAProcess.exe" + 0x01D00DB8)
  
   if (!CPed)
    return;

   *(float*)(CPed + 0x280) = value; //0x280 is the health pointer in CPed pointer -> 01D00DB8 so 01D00DB8 + 0x280 = health btw this pointer 0x01D00DB8 define localplayer
}

//btw health is a float in fivem
/*
if this *(float*)(CPed + 0x280) = value; dont work add a 0 in the health pointer i mean 0x280 to 0x0280
*/
