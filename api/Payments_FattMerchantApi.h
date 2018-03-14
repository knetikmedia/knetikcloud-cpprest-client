/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * Payments_FattMerchantApi.h
 *
 * 
 */

#ifndef Payments_FattMerchantApi_H_
#define Payments_FattMerchantApi_H_


#include "ApiClient.h"

#include "FattMerchantPaymentMethodRequest.h"
#include "PaymentMethodResource.h"
#include "Result.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  Payments_FattMerchantApi
{
public:
    Payments_FattMerchantApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~Payments_FattMerchantApi();
    /// <summary>
    /// Create or update a FattMerchant payment method for a user
    /// </summary>
    /// <remarks>
    /// Stores customer information and creates a payment method that can be used to pay invoices through the payments endpoints. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; FATTMERCHANT_ADMIN or owner
    /// </remarks>
    /// <param name="request">Request containing payment method information for user (optional)</param>
    pplx::task<std::shared_ptr<PaymentMethodResource>> createOrUpdateFattMerchantPaymentMethod(std::shared_ptr<FattMerchantPaymentMethodRequest> request);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* Payments_FattMerchantApi_H_ */
