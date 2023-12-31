/*
 * Copyright (C) 2022 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package android.hardware.secure_element;

@VintfStability
interface ISecureElementCallback {
    /**
     * Used to inform the client about changes in the state of the Secure
     * Element.
     *
     * @param connected indicates the current state of the SE
     * @param reason provides additional data why there was a change in state
     *               ex. initialization error, SE removed etc
     *               This is used only for debugging purpose to understand
     *               in-field issues.
     */
    void onStateChange(in boolean connected, in String debugReason);
}
