/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.2.3.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * PaymentsStripeApi.h
 *
 * 
 */

#ifndef PaymentsStripeApi_H_
#define PaymentsStripeApi_H_


#include "ApiClient.h"

#include "PaymentMethodResource.h"
#include "Result.h"
#include "StripeCreatePaymentMethod.h"
#include "StripePaymentRequest.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  PaymentsStripeApi
{
public:
    PaymentsStripeApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~PaymentsStripeApi();
    /// <summary>
    /// Create a Stripe payment method for a user
    /// </summary>
    /// <remarks>
    /// Stores customer information and creates a payment method that can be used to pay invoices through the payments endpoints.
    /// </remarks>
    /// <param name="request">The request to create a Stripe customer with payment info (optional)</param>
    pplx::task<std::shared_ptr<PaymentMethodResource>> createStripePaymentMethod(std::shared_ptr<StripeCreatePaymentMethod> request);
    /// <summary>
    /// Pay with a single use token
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="request">The request to pay an invoice (optional)</param>
    pplx::task<void> payStripeInvoice(std::shared_ptr<StripePaymentRequest> request);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* PaymentsStripeApi_H_ */

