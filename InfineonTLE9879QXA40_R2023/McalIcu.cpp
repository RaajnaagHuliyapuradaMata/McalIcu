/******************************************************************************/
/* File   : McalIcu.cpp                                                       */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "McalIcu.hpp"
#include "infMcalIcu_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_McalIcu, MCALICU_VAR) McalIcu;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, MCALICU_CODE) module_McalIcu::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, MCALICU_CONST,       MCALICU_APPL_CONST) lptrNvMBlocksRomModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   MCALICU_CONFIG_DATA, MCALICU_APPL_CONST) lptrCfgModule
){
#if(STD_ON == McalIcu_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrNvMBlocksRomModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrNvMBlocksRom = lptrNvMBlocksRomModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == McalIcu_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == McalIcu_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == McalIcu_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALICU_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALICU_CODE) module_McalIcu::DeInitFunction(
   void
){
#if(STD_ON == McalIcu_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalIcu_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == McalIcu_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALICU_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALICU_CODE) module_McalIcu::MainFunction(
   void
){
#if(STD_ON == McalIcu_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalIcu_InitCheck)
   }
   else{
#if(STD_ON == McalIcu_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALICU_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALICU_CODE) module_McalIcu::SetMode(
   void
){
}

FUNC(void, MCALICU_CODE) module_McalIcu::DisableWakeup(
   void
){
}

FUNC(void, MCALICU_CODE) module_McalIcu::SetActivationCondition(
   void
){
}

FUNC(void, MCALICU_CODE) module_McalIcu::DisableNotification(
   void
){
}

FUNC(void, MCALICU_CODE) module_McalIcu::EnableNotification(
   void
){
}

FUNC(void, MCALICU_CODE) module_McalIcu::GetInputState(
   void
){
}

FUNC(void, MCALICU_CODE) module_McalIcu::StartTimeStamp(
   void
){
}

FUNC(void, MCALICU_CODE) module_McalIcu::StopTimeStamp(
   void
){
}

FUNC(void, MCALICU_CODE) module_McalIcu::GetTimeStampIndex(
   void
){
}

FUNC(void, MCALICU_CODE) module_McalIcu::ResetEdgeCount(
   void
){
}

FUNC(void, MCALICU_CODE) module_McalIcu::DisableEdgeCount(
   void
){
}

FUNC(void, MCALICU_CODE) module_McalIcu::EnableEdgeCount(
   void
){
}

FUNC(void, MCALICU_CODE) module_McalIcu::GetEdgeNumbers(
   void
){
}

FUNC(void, MCALICU_CODE) module_McalIcu::StartSignalMeasurement(
   void
){
}

FUNC(void, MCALICU_CODE) module_McalIcu::StopSignalMeasurement(
   void
){
}

FUNC(void, MCALICU_CODE) module_McalIcu::GetTimeElapsed(
   void
){
}

FUNC(void, MCALICU_CODE) module_McalIcu::GetDutyCycleValues(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

