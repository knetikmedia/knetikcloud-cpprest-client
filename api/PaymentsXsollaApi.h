/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * PaymentsXsollaApi.h
 *
 * 
 */

#ifndef PaymentsXsollaApi_H_
#define PaymentsXsollaApi_H_


#include "ApiClient.h"

#include "Result.h"
#include "XsollaPaymentRequest.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  PaymentsXsollaApi
{
public:
    PaymentsXsollaApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~PaymentsXsollaApi();
    /// <summary>
    /// Create a payment token that should be used to forward the user to Xsolla so they can complete payment
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="request">The payment request to be sent to XSolla (optional)</param>
    pplx::task<utility::string_t> createXsollaTokenUrl(std::shared_ptr<XsollaPaymentRequest> request);
    /// <summary>
    /// Receives payment response from Xsolla
    /// </summary>
    /// <remarks>
    /// Only used by Xsolla to call back to JSAPI after processing user payment action
    /// </remarks>
    
    pplx::task<void> receiveXsollaNotification();

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* PaymentsXsollaApi_H_ */

