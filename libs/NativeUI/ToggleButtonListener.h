/* Copyright 2013 David Axmark

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

	http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

/*! \addtogroup NativeUILib
 *  @{
 */

/**
 *  @defgroup NativeUILib Native UI Library
 *  @{
 */

/**
 * @file ToggleButtonListener.h
 * @author Emma Tresanszki
 *
 * \brief Listener for ToggleButton events.
 */

#ifndef NATIVEUI_TOGGLE_BUTTON_LISTENER_H_
#define NATIVEUI_TOGGLE_BUTTON_LISTENER_H_

namespace NativeUI
{
    // Forward declaration.
    class ToggleButton;

    /**
     * \brief Listener for ToggleButton events.
     */
    class ToggleButtonListener
    {
    public:
        /**
         * This method is called when the state of the toggle button was changed
         * by the user.
         * @param toggleButton The toggle button object that generated the event.
         * @param state True if the toggle button is checked, false otherwise.
         */
        virtual void toggleButtonStateChanged(
            ToggleButton* toggleButton,
            bool state) = 0;
    };

} // namespace NativeUI

#endif /* NATIVEUI_TOGGLE_BUTTON_LISTENER_H_ */

/*! @} */
